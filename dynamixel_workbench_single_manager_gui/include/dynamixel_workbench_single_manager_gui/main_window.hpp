/**
 * @file /include/dynamixel_workbench_single_manager_gui/main_window.hpp
 *
 * @brief Qt based gui for dynamixel_workbench_single_manager_gui.
 *
 * @date November 2010
 **/
#ifndef dynamixel_workbench_single_manager_gui_MAIN_WINDOW_H
#define dynamixel_workbench_single_manager_gui_MAIN_WINDOW_H

/*****************************************************************************
** Includes
*****************************************************************************/
#ifndef Q_MOC_RUN

#include <QtGui/QMainWindow>
#include "ui_main_window.h"
#include "qnode.hpp"

#endif
/*****************************************************************************
** Namespace
*****************************************************************************/

namespace dynamixel_workbench_single_manager_gui {

/*****************************************************************************
** Interface [MainWindow]
*****************************************************************************/
/**
 * @brief Qt central, all operations relating to the view part here.
 */
class MainWindow : public QMainWindow {
Q_OBJECT

public:
	MainWindow(int argc, char** argv, QWidget *parent = 0);
	~MainWindow();

        //void ReadSettings(); // Load up qt program settings at startup
        //void WriteSettings(); // Save qt program settings when closing

	void closeEvent(QCloseEvent *event); // Overloaded function
	void showNoMasterMessage();

public Q_SLOTS:
	/******************************************
	** Auto-connections (connectSlotsByName())
	*******************************************/
        void on_actionAbout_triggered();
        //void on_button_connect_clicked(bool check );
        //void on_checkbox_use_environment_stateChanged(int state);

    /******************************************
    ** Manual connections
    *******************************************/
    void updateLoggingView(); // no idea why this can't connect automatically

private:
        Ui::MainWindowDesign ui_;
        QNode qnode_;
};

}  // namespace dynamixel_workbench_single_manager_gui

#endif // dynamixel_workbench_single_manager_gui_MAIN_WINDOW_H
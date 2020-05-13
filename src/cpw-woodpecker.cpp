#include "windowMain.h"

int main(int argc, char *argv[])
{
    auto cpw_woodpecker = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

    Gtk::Window ventana;

    return cpw_woodpecker->run(ventana);
}

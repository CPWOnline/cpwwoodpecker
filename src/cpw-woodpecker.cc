/*
 * cpw-woodpecker.cc
 * 
 * Copyright 2021 CPW Online <josefelixrc@outlook.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include "cpw-woodpecker.h"

namespace CPW
{

CPWWoodpecker::CPWWoodpecker()
{
	
	auto mi_app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");
	Gtk::Window ventana;
	return mi_app->run(ventana);
}


CPWWoodpecker::~CPWWoodpecker()
{
	
}

}
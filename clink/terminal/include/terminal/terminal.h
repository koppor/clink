// Copyright (c) 2018 Martin Ridgers
// License: http://opensource.org/licenses/MIT

#pragma once

class screen_buffer;
class terminal_in;
class terminal_out;

//------------------------------------------------------------------------------
struct terminal
{
    screen_buffer*  screen;
    terminal_in*    in;
    terminal_out*   out;
    bool            screen_owned;
};

//------------------------------------------------------------------------------
terminal            terminal_create(screen_buffer* screen=nullptr);
void                terminal_destroy(const terminal& terminal);

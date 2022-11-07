#include "headless_service.h"
#include "libheadless.h"

void
cursor_to (int terminal_id, int vpos, int hpos)
{
}
void
raw_cursor_to (int terminal_id, int row, int col)
{
}

void
clear_to_end (int terminal_id)
{
}

void
clear_frame (int terminal_id)
{
}

void
clear_end_of_line (int terminal_id, int first_unused_hpos)
{
}

void
ins_del_lines (int terminal_id, int vpos, int n)
{
}

void
insert_glyphs (int terminal_id, const wchar_t *start, int len)
{
}

void
write_glyphs (int terminal_id, const wchar_t *string, int len)
{
}

void
delete_glyphs (int terminal_id, int n)
{
}

void
ring_bell (int terminal_id)
{
}

void
reset_terminal_modes (int terminal_id)
{
}

void
set_terminal_modes (int terminal_id)
{
}

void
update_end (int terminal_id)
{
}

void
menu_show (int terminal_id, int x, int y, int menuflags,
                  const char * title, const char **error_name)
{
}

void
set_terminal_window (int terminal_id, int size)
{
}

int
defined_color (int terminal_id, const char *color_name,
                      const char *color_def, int alloc, int _makeIndex)
{
  return 0;
}

int
read_avail_input (int terminal_id)
{
  return 0;
}

void
delete_frame (int terminal_id)
{
}

void
delete_terminal (int terminal_id)
{
}

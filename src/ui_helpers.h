#ifndef UI_HELPERS_H
#define UI_HELPERS_H

extern QString screen_key (QWidget *);

enum class game_dialog_type { none, normal, variant };
extern go_game_ptr open_file_dialog (QWidget *);
extern go_game_ptr open_db_dialog (QWidget *);
extern QString open_db_filename_dialog (QWidget *);
extern QString open_filename_dialog (QWidget *);
extern go_game_ptr new_game_dialog (QWidget *);
extern go_game_ptr new_variant_game_dialog (QWidget *);
extern go_game_ptr record_from_stream (QIODevice &isgf, QTextCodec *codec);
extern go_game_ptr record_from_file (const QString &filename, QTextCodec *codec);
extern bool open_window_from_file (const QString &filename);
extern bool open_local_board (QWidget *, game_dialog_type, const QString &);
extern QString get_candidate_filename (const QString &dir, const game_info &);
extern bool save_to_file (QWidget *, go_game_ptr, const QString &filename);

extern QString sec_to_time (int);

extern void show_batch_analysis ();
extern void show_tutorials ();
extern bool play_engine (QWidget *);
extern bool play_two_engines (QWidget *);

extern void help_about ();
extern void help_new_version ();

#endif

/* ev-history-action.h
 *  this file is part of xreader, a document viewer
 *
 * Copied and modified from evince/shell/ev-history-action.h
 */

#ifndef EV_HISTORY_ACTION_H
#define EV_HISTORY_ACTION_H

#include <gtk/gtk.h>

#include "ev-history.h"

G_BEGIN_DECLS

#define EV_TYPE_HISTORY_ACTION            (ev_history_action_get_type ())
#define EV_HISTORY_ACTION(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), EV_TYPE_HISTORY_ACTION, EvHistoryAction))
#define EV_IS_HISTORY_ACTION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), EV_TYPE_HISTORY_ACTION))
#define EV_HISTORY_ACTION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), EV_TYPE_HISTORY_ACTION, EvHistoryActionClass))
#define EV_IS_HISTORY_ACTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((obj), EV_TYPE_HISTORY_ACTION))
#define EV_HISTORY_ACTION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj), EV_TYPE_HISTORY_ACTION, EvHistoryActionClass))

typedef struct _EvHistoryAction        EvHistoryAction;
typedef struct _EvHistoryActionClass   EvHistoryActionClass;
typedef struct _EvHistoryActionPrivate EvHistoryActionPrivate;

struct _EvHistoryAction
{
    GtkAction parent;

    EvHistoryActionPrivate *priv;
};

struct _EvHistoryActionClass
{
    GtkActionClass parent_class;
};

GType ev_history_action_get_type (void);

void ev_history_action_set_history (EvHistoryAction *action,
                                    EvHistory       *history);
gboolean ev_history_action_get_popup_shown (EvHistoryAction *action);

G_END_DECLS

#endif

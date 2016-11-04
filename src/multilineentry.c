
#include "hbui.h"

//_UI_EXTERN char *uiMultilineEntryText(uiMultilineEntry *e);
HB_FUNC( UIMULTILINEENTRYTEXT ) {
    uiMultilineEntry *e = hbui_param( 1 );
    if( e ) {
        hb_retc( uiMultilineEntryText( e ) );
    }
}

//_UI_EXTERN void uiMultilineEntrySetText(uiMultilineEntry *e, const char *text);
HB_FUNC( UIMULTILINEENTRYSETTEXT ) {
    uiMultilineEntry *e = hbui_param( 1 );
    if( e ) {
        uiMultilineEntrySetText( e, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiMultilineEntryAppend(uiMultilineEntry *e, const char *text);
HB_FUNC( UIMULTILINEENTRYAPPEND ) {
    uiMultilineEntry *e = hbui_param( 1 );
    if( e ) {
        uiMultilineEntryAppend( e, hb_parc( 2 ) );
    }
}

//_UI_EXTERN void uiMultilineEntryOnChanged(uiMultilineEntry *e, void (*f)(uiMultilineEntry *e, void *data), void *data);

//_UI_EXTERN int uiMultilineEntryReadOnly(uiMultilineEntry *e);
HB_FUNC( UIMULTILINEENTRYREADONLY ) {
    uiMultilineEntry *e = hbui_param( 1 );
    if( e ) {
        hb_retni( uiMultilineEntryReadOnly( e ) );
    }
}

//_UI_EXTERN void uiMultilineEntrySetReadOnly(uiMultilineEntry *e, int readonly);
HB_FUNC( UIMULTILINEENTRYSETREADONLY ) {
    uiMultilineEntry *e = hbui_param( 1 );
    if( e ) {
        uiMultilineEntrySetReadOnly( e, hb_parni( 2 ) );
    }
}

//_UI_EXTERN uiMultilineEntry *uiNewMultilineEntry(void);
HB_FUNC( UINEWMULTILINEENTRY ) {
    hbui_ret( uiNewMultilineEntry() );
}

//_UI_EXTERN uiMultilineEntry *uiNewNonWrappingMultilineEntry(void);
HB_FUNC( UINEWNONWRAPPINGMULTILINEENTRY ) {
    hbui_ret( uiNewNonWrappingMultilineEntry() );
}

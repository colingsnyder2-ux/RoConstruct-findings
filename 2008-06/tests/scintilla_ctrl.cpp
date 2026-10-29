#include "scintilla_native_roots.h"
// Real shipped SciLexer plus the rebuilt wrapper and inherited notification layout.
#include <afxwin.h>
#include <afxext.h>
#include <afxcmn.h>
#include <afxpriv.h>
#include "Platform.h"
#include "Scintilla.h"
#include "SciLexer.h"
#include "ScintillaCtrl.h"
#include "ScintillaDocView.h"
#include <stdio.h>
#include <string.h>

class ProbeView : public CScintillaView {
public:
    int chars, margins, modified, changes;
    ProbeView() : chars(0), margins(0), modified(0), changes(0) {}
    using CScintillaView::OnNotify;
    using CScintillaView::OnCommand;
    using CScintillaView::FindTextSimple;
    virtual void OnChange() { ++changes; }
    virtual void OnCharAdded(SCNotification* n) { if (n->ch == 'x') ++chars; }
    virtual void OnMarginClick(SCNotification* n) { if (n->margin == 2) ++margins; }
    virtual void OnModified(SCNotification*) { ++modified; }
};

int main()
{
    if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0)) return 2;
    HMODULE lexer = LoadLibraryA("SciLexer.dll");
    if (!lexer) return 3;
    CWnd parent;
    if (!parent.CreateEx(0, AfxRegisterWndClass(0), _T("RoConstruct native Scintilla"),
                         WS_OVERLAPPED, CRect(0, 0, 320, 200), NULL, 0)) return 4;
    {
        ProbeView view;
        CScintillaCtrl& ctrl = view.GetCtrl();
        if (!ctrl.Create(WS_CHILD, CRect(0, 0, 320, 200), &parent, 1)) return 5;
        if (!ctrl.GetDirectFunction() || !ctrl.GetDirectPointer()) return 6;
        ctrl.SetText("alpha\nbeta");
        char text[64] = {0};
        ctrl.GetText(sizeof(text), text, FALSE);
        if (strcmp(text, "alpha\nbeta") || ctrl.GetLength() != 10 || ctrl.GetLineCount(FALSE) != 2) return 7;
        ctrl.EmptyUndoBuffer();
        ctrl.SetSel(0, 5, FALSE);
        ctrl.ReplaceSel("gamma");
        ctrl.GetText(sizeof(text), text);
        if (strcmp(text, "gamma\nbeta") || !ctrl.CanUndo()) return 8;
        ctrl.Undo(FALSE);
        ctrl.GetText(sizeof(text), text);
        if (strcmp(text, "alpha\nbeta") || !ctrl.CanRedo()) return 9;
        ctrl.Redo();
        ctrl.GetText(sizeof(text), text, FALSE);
        if (strcmp(text, "gamma\nbeta")) return 10;
        ctrl.SetSel(0, 0);
        if (!view.FindTextSimple(_T("beta"), TRUE, TRUE, FALSE, FALSE)) return 15;
        if (ctrl.GetSelectionStart() != 6 || ctrl.GetSelectionEnd() != 10) return 16;
        if (!view.OnCommand(MAKEWPARAM(1, SCEN_CHANGE), (LPARAM)ctrl.GetSafeHwnd()) || view.changes != 1) return 17;
        SCNotification n = {0};
        n.nmhdr.hwndFrom = ctrl.GetSafeHwnd();
        LRESULT result = 0;
        n.nmhdr.code = SCN_CHARADDED; n.ch = 'x';
        if (!view.OnNotify(0, (LPARAM)&n, &result)) return 11;
        n.nmhdr.code = SCN_MARGINCLICK; n.margin = 2;
        if (!view.OnNotify(0, (LPARAM)&n, &result)) return 12;
        n.nmhdr.code = SCN_MODIFIED;
        if (!view.OnNotify(0, (LPARAM)&n, &result)) return 13;
        if (view.chars != 1 || view.margins != 1 || view.modified != 1) return 14;
        printf("scintilla text/direct/message/undo/redo/search/command and three virtual notifications passed\n");
    }
    parent.DestroyWindow();
    FreeLibrary(lexer);
    return 0;
}

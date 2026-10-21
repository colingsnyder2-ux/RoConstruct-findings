// from server: 92% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_editorempty_40899e513cfa3f2c.cpp

// Candidate translation unit (score above; library headers required).
#include <boost/shared_ptr.hpp>
extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);

typedef boost::shared_ptr<void> EmptyPair;

struct EditorBase {
    void reset(EmptyPair);
};

struct WindowData {
    char padding[0x20];
    void* handle;
};

struct CScriptEditor {
    char padding[0x54];
    WindowData* window;

    void close(int, int, int, int);
};

void CScriptEditor::close(int, int, int, int canceled)
{
    if (canceled == 0) {
        reinterpret_cast<EditorBase*>(
            reinterpret_cast<char*>(this) - 0xec)->reset(EmptyPair());
        PostMessageA(window->handle, 0x10, 0, 0);
    }
}


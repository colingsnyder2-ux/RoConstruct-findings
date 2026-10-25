// from server: 100% by colin
// roc 2008-06 00449d90  unit: CIDEDocManager  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449d90
//
// 00449d90  6aff                 push -1
// 00449d92  68c9107c00           push 0x7c10c9
// 00449d97  64a100000000         mov eax, dword ptr fs:[0]
// 00449d9d  50                   push eax
// 00449d9e  64892500000000       mov dword ptr fs:[0], esp
// 00449da5  51                   push ecx
// 00449da6  56                   push esi
// 00449da7  8d4c2404             lea ecx, [esp + 4]
// 00449dab  ff15043f8000         call dword ptr [0x803f04]
// 00449db1  68e4688100           push 0x8168e4
// 00449db6  8d442408             lea eax, [esp + 8]
// 00449dba  68c4688100           push 0x8168c4
// 00449dbf  50                   push eax
// 00449dc0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00449dc8  ff15dc3e8000         call dword ptr [0x803edc]
// 00449dce  83c40c               add esp, 0xc
// 00449dd1  e878702500           call 0x6a0e4e
// 00449dd6  85c0                 test eax, eax
// 00449dd8  740d                 je 0x449de7
// 00449dda  8b10                 mov edx, dword ptr [eax]
// 00449ddc  8bc8                 mov ecx, eax
// 00449dde  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00449de1  ffd0                 call eax
// 00449de3  8bf0                 mov esi, eax
// 00449de5  eb02                 jmp 0x449de9
// 00449de7  33f6                 xor esi, esi
// 00449de9  6a0a                 push 0xa
// 00449deb  6a00                 push 0
// 00449ded  8d4c240c             lea ecx, [esp + 0xc]
// 00449df1  ff15e03e8000         call dword ptr [0x803ee0]
// 00449df7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00449dfa  50                   push eax
// 00449dfb  68b4688100           push 0x8168b4
// 00449e00  68ac688100           push 0x8168ac
// 00449e05  51                   push ecx
// 00449e06  ff15042b8000         call dword ptr [0x802b04]
// 00449e0c  8d4c2404             lea ecx, [esp + 4]
// 00449e10  ff15143f8000         call dword ptr [0x803f14]
// 00449e16  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00449e1a  5e                   pop esi
// 00449e1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00449e22  83c410               add esp, 0x10
// 00449e25  c3                   ret 

struct Text;

extern void (__cdecl *TextFormat)(Text *, const char *, ...);
extern const char *(__thiscall *TextData)(const Text *);

struct Text {
    char *data;
    __declspec(dllimport) Text();
    __declspec(dllimport) ~Text() throw();
};





struct Window {
    char padding[32];
    void *handle;
};

struct Application {
    struct Table {
        void *unused[31];
        Window *(__thiscall *getWindow)(Application *);
    };
    Table *table;
};

extern Application *__cdecl GetApplication();

extern void *(__stdcall *ShellExecuteA)(
    void *, const char *, const char *, const char *, const char *, int);

void OpenWiki()
{
    Text command;
    TextFormat(&command, "url.dll,FileProtocolHandler %s",
               "http://wiki.roblox.com");

    Application *application = GetApplication();
    Window *window;
    if (application)
        window = application->table->getWindow(application);
    else
        window = 0;

    ShellExecuteA(window->handle, "open", "rundll32.exe",
                  TextData(&command), 0, 10);
}

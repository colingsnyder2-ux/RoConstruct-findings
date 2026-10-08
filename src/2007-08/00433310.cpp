// from server: 87% by colin
// roc 2007-08 00433310  unit: RBX::CMarshalWindow  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00433310
//
// 00433310  56                   push esi
// 00433311  8bf1                 mov esi, ecx
// 00433313  8d462c               lea eax, [esi + 0x2c]
// 00433316  50                   push eax
// 00433317  c706e0ba7800         mov dword ptr [esi], 0x78bae0
// 0043331d  ff1504d37700         call dword ptr [0x77d304]
// 00433323  8b4614               mov eax, dword ptr [esi + 0x14]
// 00433326  85c0                 test eax, eax
// 00433328  7406                 je 0x433330
// 0043332a  50                   push eax
// 0043332b  e85a202f00           call 0x72538a
// 00433330  f644240801           test byte ptr [esp + 8], 1
// 00433335  7409                 je 0x433340
// 00433337  56                   push esi
// 00433338  e825c91f00           call 0x62fc62
// 0043333d  83c404               add esp, 4
// 00433340  8bc6                 mov eax, esi
// 00433342  5e                   pop esi
// 00433343  c20400               ret 4

struct CMarshalWindow {
    char pad0[0x14];
    void* field14;
    char pad18[0x14];
    char field2c[8];
    CMarshalWindow* destroy(char);
};

extern "C" void __stdcall DeleteCriticalSection(void*);
extern "C" void __cdecl func_0072538a(void*);
extern "C" void __cdecl func_0062fc62(void*);

CMarshalWindow* CMarshalWindow::destroy(char flag)
{
    *(void**)this = (void*)0x78bae0;
    DeleteCriticalSection(field2c);
    if (field14) {
        func_0072538a(field14);
    }
    if (flag & 1) {
        func_0062fc62(this);
    }
    return this;
}

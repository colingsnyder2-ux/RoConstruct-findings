// from server: 83% by colin
// roc 2007-08 005fbe00  unit: RBX::LockTool  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fbe00
//
// 005fbe00  56                   push esi
// 005fbe01  8bf1                 mov esi, ecx
// 005fbe03  8b4620               mov eax, dword ptr [esi + 0x20]
// 005fbe06  85c0                 test eax, eax
// 005fbe08  742d                 je 0x5fbe37
// 005fbe0a  50                   push eax
// 005fbe0b  e8708df7ff           call 0x574b80
// 005fbe10  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fbe13  84c0                 test al, al
// 005fbe15  0f94c0               sete al
// 005fbe18  50                   push eax
// 005fbe19  51                   push ecx
// 005fbe1a  e861c5f7ff           call 0x578380
// 005fbe1f  8b5618               mov edx, dword ptr [esi + 0x18]
// 005fbe22  83c40c               add esp, 0xc
// 005fbe25  6a08                 push 8
// 005fbe27  52                   push edx
// 005fbe28  e8e35cf6ff           call 0x561b10
// 005fbe2d  83c404               add esp, 4
// 005fbe30  8bc8                 mov ecx, eax
// 005fbe32  e8d909f9ff           call 0x58c810
// 005fbe37  8bc6                 mov eax, esi
// 005fbe39  5e                   pop esi
// 005fbe3a  c20400               ret 4

struct LockTool {
    char pad[0x18];
    void* field18;
    char pad2[4];
    void* field20;
    LockTool* method(int);
};

extern "C" bool __stdcall sub_574B80(void*);
extern "C" void __stdcall sub_578380(void*, bool);
extern "C" void* __stdcall sub_561B10(void*, int);
extern "C" void __stdcall sub_58C810(void*);

LockTool* LockTool::method(int)
{
    if (field20) {
        bool b = sub_574B80(field20);
        sub_578380(field20, !b);
        void* p = sub_561B10(field18, 8);
        sub_58C810(p);
    }
    return this;
}

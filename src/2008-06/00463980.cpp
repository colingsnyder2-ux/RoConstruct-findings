// from server: 100% by king_originala
// roc 2008-06 00463980  unit: CScriptEditor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463980
//
// 00463980  832d94df960001       sub dword ptr [0x96df94], 1
// 00463987  56                   push esi
// 00463988  8bf1                 mov esi, ecx
// 0046398a  750c                 jne 0x463998
// 0046398c  a190df9600           mov eax, dword ptr [0x96df90]
// 00463991  50                   push eax
// 00463992  ff15a0218000         call dword ptr [0x8021a0]
// 00463998  8bce                 mov ecx, esi
// 0046399a  5e                   pop esi
// 0046399b  e9d6d02300           jmp 0x6a0a76

extern int libraryReferences;
extern void* libraryHandle;
extern "C" int (__stdcall* FreeLibrary)(void*);

struct CScriptEditor
{
    void cleanup();
    void func_00463980();
};

void CScriptEditor::func_00463980()
{
    if (--libraryReferences == 0)
        FreeLibrary(libraryHandle);
    cleanup();
}

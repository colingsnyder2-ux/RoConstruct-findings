// from server: 100% by king_originala
// roc 2008-06 00449d20  unit: CIDEDocManager  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449d20
//
// 00449d20  6aff                 push -1
// 00449d22  68ab107c00           push 0x7c10ab
// 00449d27  64a100000000         mov eax, dword ptr fs:[0]
// 00449d2d  50                   push eax
// 00449d2e  64892500000000       mov dword ptr fs:[0], esp
// 00449d35  81ec30010000         sub esp, 0x130
// 00449d3b  6a00                 push 0
// 00449d3d  8d4c2404             lea ecx, [esp + 4]
// 00449d41  e8da74fbff           call 0x401220
// 00449d46  8d0c24               lea ecx, [esp]
// 00449d49  c784243801000000000000 mov dword ptr [esp + 0x138], 0
// 00449d54  e8f56a2500           call 0x6a084e
// 00449d59  8d0c24               lea ecx, [esp]
// 00449d5c  c7842438010000ffffffff mov dword ptr [esp + 0x138], 0xffffffff
// 00449d67  e83473fbff           call 0x4010a0
// 00449d6c  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 00449d73  64890d00000000       mov dword ptr fs:[0], ecx
// 00449d7a  81c43c010000         add esp, 0x13c
// 00449d80  c3                   ret 

struct Dialog {
    char storage[0x12c];

    Dialog(void* parent);
    virtual ~Dialog();
    virtual int DoModal();
};

struct CIDEDocManager {
    void OnAppAbout();
};

void CIDEDocManager::OnAppAbout()
{
    Dialog dialog(0);
    dialog.DoModal();
}

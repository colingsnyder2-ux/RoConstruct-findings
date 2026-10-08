// from server: 59% by colin
// roc 2007-08 00461d50  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461d50
//
// 00461d50  56                   push esi
// 00461d51  6a00                 push 0
// 00461d53  6a00                 push 0
// 00461d55  68007f0000           push 0x7f00
// 00461d5a  6a00                 push 0
// 00461d5c  8bf1                 mov esi, ecx
// 00461d5e  ff1520ec7700         call dword ptr [0x77ec20]
// 00461d64  50                   push eax
// 00461d65  6a08                 push 8
// 00461d67  e88ae71c00           call 0x6304f6
// 00461d6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00461d70  81492000000006       or dword ptr [ecx + 0x20], 0x6000000
// 00461d77  894128               mov dword ptr [ecx + 0x28], eax
// 00461d7a  51                   push ecx
// 00461d7b  8bce                 mov ecx, esi
// 00461d7d  e8e2e81c00           call 0x630664
// 00461d82  5e                   pop esi
// 00461d83  c20400               ret 4

extern "C" __declspec(dllimport) void* __stdcall LoadCursorA(void*, const char*);
extern "C" void* __stdcall sub_6304F6(void*, int);
extern "C" void __stdcall sub_630664(void*, void*);

struct VCSecureHtmlView {
    char pad[0x20];
    unsigned int flags;
    void* cursor;
    void __stdcall InitCursor(void* param);
};

void __stdcall VCSecureHtmlView::InitCursor(void* param)
{
    void* hcur = LoadCursorA(0, (const char*)0x7f00);
    void* obj = sub_6304F6(hcur, 8);
    obj = (void*)((char*)obj);
    *(unsigned int*)((char*)obj + 0x20) |= 0x6000000;
    *(void**)((char*)obj + 0x28) = hcur;
    sub_630664(this, obj);
}

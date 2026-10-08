// from server: 90% by colin
// roc 2007-08 0045e270  unit: Scintilla::CScintillaView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045e270
//
// 0045e270  56                   push esi
// 0045e271  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045e275  8b16                 mov edx, dword ptr [esi]
// 0045e277  8b5274               mov edx, dword ptr [edx + 0x74]
// 0045e27a  0fb7521e             movzx edx, word ptr [edx + 0x1e]
// 0045e27e  8b4614               mov eax, dword ptr [esi + 0x14]
// 0045e281  3bc2                 cmp eax, edx
// 0045e283  771c                 ja 0x45e2a1
// 0045e285  3b81bc000000         cmp eax, dword ptr [ecx + 0xbc]
// 0045e28b  761b                 jbe 0x45e2a8
// 0045e28d  8b01                 mov eax, dword ptr [ecx]
// 0045e28f  8b542408             mov edx, dword ptr [esp + 8]
// 0045e293  8b808c010000         mov eax, dword ptr [eax + 0x18c]
// 0045e299  56                   push esi
// 0045e29a  52                   push edx
// 0045e29b  ffd0                 call eax
// 0045e29d  85c0                 test eax, eax
// 0045e29f  7507                 jne 0x45e2a8
// 0045e2a1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0045e2a8  5e                   pop esi
// 0045e2a9  c20800               ret 8

struct CScintillaView {
    void sub_45E270(int, int);
};

void CScintillaView::sub_45E270(int a, int b) {
    int* p = (int*)b;
    unsigned short v = *(unsigned short*)(*(int*)(*(int*)p + 0x74) + 0x1e);
    unsigned int e = *(unsigned int*)((char*)p + 0x14);
    if (e > v) {
        *(int*)((char*)p + 0x10) = 0;
        return;
    }
    if (e > *(unsigned int*)((char*)this + 0xbc)) {
        int (*fn)(void*, int, int) = *(int (**)(void*, int, int))(*(int*)this + 0x18c);
        if (fn(this, a, b) == 0) {
            *(int*)((char*)p + 0x10) = 0;
        }
    }
}

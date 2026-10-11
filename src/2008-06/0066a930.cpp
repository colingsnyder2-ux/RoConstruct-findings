// from server: 63% by colin
// roc 2008-06 0066a930  unit: RBX::GroupDragTool  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066a930
//
// 0066a930  56                   push esi
// 0066a931  8bf1                 mov esi, ecx
// 0066a933  807e2800             cmp byte ptr [esi + 0x28], 0
// 0066a937  7432                 je 0x66a96b
// 0066a939  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0066a93c  e83f3efaff           call 0x60e780
// 0066a941  8b06                 mov eax, dword ptr [esi]
// 0066a943  8b10                 mov edx, dword ptr [eax]
// 0066a945  8bce                 mov ecx, esi
// 0066a947  c6462800             mov byte ptr [esi + 0x28], 0
// 0066a94b  ffd2                 call edx
// 0066a94d  83c004               add eax, 4
// 0066a950  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0066a954  7205                 jb 0x66a95b
// 0066a956  8b4004               mov eax, dword ptr [eax + 4]
// 0066a959  eb03                 jmp 0x66a95e
// 0066a95b  83c004               add eax, 4
// 0066a95e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0066a961  51                   push ecx
// 0066a962  50                   push eax
// 0066a963  e8581cf2ff           call 0x58c5c0
// 0066a968  83c408               add esp, 8
// 0066a96b  8b16                 mov edx, dword ptr [esi]
// 0066a96d  8b4228               mov eax, dword ptr [edx + 0x28]
// 0066a970  8bce                 mov ecx, esi
// 0066a972  ffd0                 call eax
// 0066a974  33c0                 xor eax, eax
// 0066a976  5e                   pop esi
// 0066a977  c20400               ret 4

struct MegaDragger;

struct GroupDragTool {
    void* vtable;
    char pad[0x14];
    void* field_18;
    void* field_1c;
    char pad2[0x8];
    bool dragging;
    int method4(int);
};

extern "C" void __stdcall sub_58C5C0(void*, void*);
extern "C" void __stdcall sub_60E780(void*);

int GroupDragTool::method4(int arg) {
    if (dragging) {
        sub_60E780(field_1c);
        void** vt = (void**)vtable;
        void (*fn)(GroupDragTool*) = (void (*)(GroupDragTool*))vt[0];
        dragging = false;
        fn(this);
        char* p = (char*)field_18 + 4;
        void* q;
        if (*(int*)(p + 0x18) < 0x10)
            q = p + 4;
        else
            q = *(void**)(p + 4);
        sub_58C5C0(q, field_18);
    }
    void** vt2 = (void**)vtable;
    void (*fn2)(GroupDragTool*) = (void (*)(GroupDragTool*))vt2[0x28/4];
    fn2(this);
    return 0;
}

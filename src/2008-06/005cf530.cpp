// from server: 30% by colin
// roc 2008-06 005cf530  unit: RBX::VWidget::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf530
//
// 005cf530  8b01                 mov eax, dword ptr [ecx]
// 005cf532  8b5054               mov edx, dword ptr [eax + 0x54]
// 005cf535  ffe2                 jmp edx

struct S {
    int* vtable;
};

extern "C" __declspec(dllimport) void __stdcall func(int* edx);

int f(S* thisPtr) {
    int* eax = thisPtr->vtable;
    int* edx = eax + 0x14;
    func(edx);
    return 0;
}

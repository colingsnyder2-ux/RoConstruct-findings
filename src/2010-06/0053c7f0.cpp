// from server: 30% by colin
// roc 2010-06 0053c7f0  unit: RBX::AdornG3D  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053c7f0
//
// 0053c7f0  8b01                 mov eax, dword ptr [ecx]
// 0053c7f2  8b4048               mov eax, dword ptr [eax + 0x48]
// 0053c7f5  ffe0                 jmp eax

struct RBX__AdornG3D {
    int* vtable;
};

extern "C" __declspec(dllimport) void __stdcall func_at_0053c7f0(int* this_ptr);

int RBX__AdornG3D_f(RBX__AdornG3D* self) {
    int* vtable_ptr = self->vtable;
    int* func_ptr = *reinterpret_cast<int**>(vtable_ptr + 0x12);
    func_at_0053c7f0(func_ptr);
    return 0;
}

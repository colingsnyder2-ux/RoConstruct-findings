// from server: 44% by colin
// roc 2010-06 004fd430  unit: RBX::Network::Replicator  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004fd430
//
// 004fd430  8b01                 mov eax, dword ptr [ecx]
// 004fd432  8b4064               mov eax, dword ptr [eax + 0x64]
// 004fd435  ffe0                 jmp eax

struct Replicator {
    int* vtable;
};

extern "C" __declspec(dllimport) void __stdcall func_004fd000(int* this_ptr);

void func_004fd430(Replicator* replicator) {
    int* vtable = replicator->vtable;
    int* func_ptr = (int*)(*(vtable + 16));
    (*(void(*)())func_ptr)();
}

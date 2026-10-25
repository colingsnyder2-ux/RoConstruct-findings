// from server: 100% by tester
// roc 2008-06 005e9160  unit: RBX::PhysicsService  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9160
//
// 005e9160  8b8988000000         mov ecx, dword ptr [ecx + 0x88]
// 005e9166  8b01                 mov eax, dword ptr [ecx]
// 005e9168  8b4018               mov eax, dword ptr [eax + 0x18]
// 005e916b  ffe0                 jmp eax

struct Owner {
    int forward();
};

int Owner::forward()
{
    int* ptr = *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + 0x88);
    int* vtable = *reinterpret_cast<int**>(ptr);
    int func = vtable[6];
    return reinterpret_cast<int(__thiscall*)(int*)>(func)(ptr);
}

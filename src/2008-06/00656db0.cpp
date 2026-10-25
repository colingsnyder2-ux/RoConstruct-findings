// from server: 100% by king_originala
// roc 2008-06 00656db0  unit: RBX::ArrowPanel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656db0
//
// 00656db0  83ec10               sub esp, 0x10
// 00656db3  56                   push esi
// 00656db4  8bf1                 mov esi, ecx
// 00656db6  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00656dbc  8b8904020000         mov ecx, dword ptr [ecx + 0x204]
// 00656dc2  8d442404             lea eax, [esp + 4]
// 00656dc6  50                   push eax
// 00656dc7  81c1a8020000         add ecx, 0x2a8
// 00656dcd  e85efeffff           call 0x656c30
// 00656dd2  8b442408             mov eax, dword ptr [esp + 8]
// 00656dd6  8b542404             mov edx, dword ptr [esp + 4]
// 00656dda  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 00656de0  8954240c             mov dword ptr [esp + 0xc], edx
// 00656de4  89442410             mov dword ptr [esp + 0x10], eax
// 00656de8  8a440c0c             mov al, byte ptr [esp + ecx + 0xc]
// 00656dec  5e                   pop esi
// 00656ded  83c410               add esp, 0x10
// 00656df0  c3                   ret 

struct Pair {
    int first;
    int second;
};

struct Cache {
    Pair get();
};

struct Container {
    char padding[0x2a8];
    Cache cache;
};

struct Owner {
    char padding[0x204];
    Container* container;
};

struct S {
    char padding[0x15c];
    Owner* owner;
    int index;

    bool f();
};

bool S::f()
{
    Pair temporary = owner->container->cache.get();
    Pair value = temporary;
    return reinterpret_cast<bool*>(&value)[index];
}

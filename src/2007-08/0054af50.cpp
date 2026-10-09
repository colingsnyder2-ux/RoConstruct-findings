// from server: 38% by colin
// roc 2007-08 0054af50  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054af50
//
// 0054af50  6aff                 push -1
// 0054af52  6858247500           push 0x752458
// 0054af57  64a100000000         mov eax, dword ptr fs:[0]
// 0054af5d  50                   push eax
// 0054af5e  64892500000000       mov dword ptr fs:[0], esp
// 0054af65  83ec08               sub esp, 8
// 0054af68  56                   push esi
// 0054af69  8bf1                 mov esi, ecx
// 0054af6b  89742408             mov dword ptr [esp + 8], esi
// 0054af6f  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054af72  85c0                 test eax, eax
// 0054af74  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054af7c  740f                 je 0x54af8d
// 0054af7e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0054af81  51                   push ecx
// 0054af82  50                   push eax
// 0054af83  8d4c240f             lea ecx, [esp + 0xf]
// 0054af87  ff1510e67700         call dword ptr [0x77e610]
// 0054af8d  8bce                 mov ecx, esi
// 0054af8f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054af97  e8a4fdffff           call 0x54ad40
// 0054af9c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054afa0  5e                   pop esi
// 0054afa1  64890d00000000       mov dword ptr fs:[0], ecx
// 0054afa8  83c414               add esp, 0x14
// 0054afab  c3                   ret 

struct S {
    char pad0[0x14];
    char* m_ptr;
    int m_size;
    void f();
};

extern "C" void __stdcall deallocate(void*, char*, int);

void S::f() {
    if (m_ptr != 0) {
        deallocate(*(void**)((char*)this + 0x18), m_ptr, m_size);
    }
    *(int*)((char*)this + 0x14) = 0;
    *(int*)((char*)this + 0x18) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    ((void(*)(void*))0x54ad40)(this);
}

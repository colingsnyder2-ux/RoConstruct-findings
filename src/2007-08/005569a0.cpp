// from server: 100% by colin
// roc 2007-08 005569a0  unit: ChatEnter  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005569a0
//
// 005569a0  56                   push esi
// 005569a1  8bf1                 mov esi, ecx
// 005569a3  e858ffffff           call 0x556900
// 005569a8  b803000000           mov eax, 3
// 005569ad  3986fc000000         cmp dword ptr [esi + 0xfc], eax
// 005569b3  7515                 jne 0x5569ca
// 005569b5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005569b9  833804               cmp dword ptr [eax], 4
// 005569bc  7524                 jne 0x5569e2
// 005569be  c786fc00000001000000 mov dword ptr [esi + 0xfc], 1
// 005569c8  eb0f                 jmp 0x5569d9
// 005569ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005569ce  833904               cmp dword ptr [ecx], 4
// 005569d1  750f                 jne 0x5569e2
// 005569d3  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 005569d9  8b16                 mov edx, dword ptr [esi]
// 005569db  8b4268               mov eax, dword ptr [edx + 0x68]
// 005569de  8bce                 mov ecx, esi
// 005569e0  ffd0                 call eax
// 005569e2  8b442408             mov eax, dword ptr [esp + 8]
// 005569e6  c7400400000000       mov dword ptr [eax + 4], 0
// 005569ed  c70001000000         mov dword ptr [eax], 1
// 005569f3  5e                   pop esi
// 005569f4  c20800               ret 8

struct ChatEnter {
    void sub_556900();
    void f(int, int);
};

void ChatEnter::f(int a, int b) {
    sub_556900();
    if (*(int*)((char*)this + 0xfc) == 3) {
        if (*(int*)b == 4) {
            *(int*)((char*)this + 0xfc) = 1;
            goto call_virtual;
        }
    } else {
        if (*(int*)b == 4) {
            *(int*)((char*)this + 0xfc) = 3;
        call_virtual:
            (*(void(__thiscall**)(ChatEnter*))(*(int*)this + 0x68))(this);
        }
    }
    *(int*)(a + 4) = 0;
    *(int*)a = 1;
}

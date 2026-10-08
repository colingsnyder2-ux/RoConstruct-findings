// from server: 35% by colin
// roc 2007-08 005d62b0  unit: ChatEnter  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d62b0
//
// 005d62b0  51                   push ecx
// 005d62b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d62b5  33c0                 xor eax, eax
// 005d62b7  890424               mov dword ptr [esp], eax
// 005d62ba  56                   push esi
// 005d62bb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d62bf  88442404             mov byte ptr [esp + 4], al
// 005d62c3  8b442404             mov eax, dword ptr [esp + 4]
// 005d62c7  50                   push eax
// 005d62c8  51                   push ecx
// 005d62c9  8bce                 mov ecx, esi
// 005d62cb  e870f2ffff           call 0x5d5540
// 005d62d0  8bc6                 mov eax, esi
// 005d62d2  5e                   pop esi
// 005d62d3  59                   pop ecx
// 005d62d4  c3                   ret 

struct ChatEnter {
    char pad0[8];
    char field8;
    void sub_5D5540(int);
    ChatEnter* method(int);
};

ChatEnter* ChatEnter::method(int arg) {
    this->sub_5D5540(arg);
    return this;
}

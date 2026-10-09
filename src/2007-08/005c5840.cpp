// from server: 28% by colin
// roc 2007-08 005c5840  unit: lua_exception  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5840
//
// 005c5840  6aff                 push -1
// 005c5842  6869997500           push 0x759969
// 005c5847  64a100000000         mov eax, dword ptr fs:[0]
// 005c584d  50                   push eax
// 005c584e  64892500000000       mov dword ptr fs:[0], esp
// 005c5855  51                   push ecx
// 005c5856  56                   push esi
// 005c5857  8bf1                 mov esi, ecx
// 005c5859  89742404             mov dword ptr [esp + 4], esi
// 005c585d  c7067c967b00         mov dword ptr [esi], 0x7b967c
// 005c5863  33c0                 xor eax, eax
// 005c5865  384614               cmp byte ptr [esi + 0x14], al
// 005c5868  89442410             mov dword ptr [esp + 0x10], eax
// 005c586c  7514                 jne 0x5c5882
// 005c586e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005c5871  894108               mov dword ptr [ecx + 8], eax
// 005c5874  8b560c               mov edx, dword ptr [esi + 0xc]
// 005c5877  6afe                 push -2
// 005c5879  52                   push edx
// 005c587a  e8117dffff           call 0x5bd590
// 005c587f  83c408               add esp, 8
// 005c5882  8bce                 mov ecx, esi
// 005c5884  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005c588c  ff15f4e67700         call dword ptr [0x77e6f4]
// 005c5892  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c5896  5e                   pop esi
// 005c5897  64890d00000000       mov dword ptr fs:[0], ecx
// 005c589e  83c410               add esp, 0x10
// 005c58a1  c3                   ret 

struct lua_exception {
    void* vfptr;          // 0x00
    int field_04;         // 0x04
    int field_08;         // 0x08
    int field_0c;         // 0x0c
    int field_10;         // 0x10
    unsigned char field_14; // 0x14
    void destroy();
};

extern "C" void __stdcall sub_5bd590(int, int);
extern "C" void __stdcall std_exception_dtor(void*);

void lua_exception::destroy() {
    vfptr = (void*)0x7b967c;
    if (field_14 == 0) {
        *(int*)(field_10 + 8) = 0;
        sub_5bd590(field_0c, -2);
    }
    std_exception_dtor(this);
}

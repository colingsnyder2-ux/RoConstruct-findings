// from server: 78% by colin
// roc 2007-08 00557180  unit: ChatEnter  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00557180
//
// 00557180  51                   push ecx
// 00557181  e80ca20d00           call 0x631392
// 00557186  83c404               add esp, 4
// 00557189  6860838c00           push 0x8c8360
// 0055718e  8bc8                 mov ecx, eax
// 00557190  ff157ce77700         call dword ptr [0x77e77c]
// 00557196  50                   push eax
// 00557197  8b442408             mov eax, dword ptr [esp + 8]
// 0055719b  50                   push eax
// 0055719c  e8ff41f1ff           call 0x46b3a0
// 005571a1  83c408               add esp, 8
// 005571a4  c20400               ret 4

struct ChatEnter {
    void sub_557180(int);
};

extern "C" void* __cdecl sub_631392();
extern "C" void* __stdcall sub_77e77c(void*);
extern "C" void __cdecl sub_46b3a0(void*, void*);

void ChatEnter::sub_557180(int arg) {
    void* p = sub_631392();
    void* q = sub_77e77c(&p);
    sub_46b3a0(q, (void*)arg);
}

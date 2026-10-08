// from server: 43% by colin
// roc 2007-08 00592510  unit: RBX::VVisit::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592510
//
// 00592510  56                   push esi
// 00592511  8b742408             mov esi, dword ptr [esp + 8]
// 00592515  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00592518  8d4604               lea eax, [esi + 4]
// 0059251b  51                   push ecx
// 0059251c  83ec1c               sub esp, 0x1c
// 0059251f  8bcc                 mov ecx, esp
// 00592521  89642428             mov dword ptr [esp + 0x28], esp
// 00592525  50                   push eax
// 00592526  ff159ce67700         call dword ptr [0x77e69c]
// 0059252c  8b16                 mov edx, dword ptr [esi]
// 0059252e  ffd2                 call edx
// 00592530  83c420               add esp, 0x20
// 00592533  5e                   pop esi
// 00592534  c3                   ret 

struct S {
    void f();
};

extern "C" void __stdcall sub_77E69C(void*, const void*);

void S::f()
{
    char* p = *(char**)((char*)this + 8);
    void* q = *(void**)((char*)this + 0x20);
    char buf[0x1c];
    sub_77E69C(buf, (char*)this + 4);
    void (*fn)(void*) = *(void (**)(void*))this;
    fn(this);
}

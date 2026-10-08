// from server: 78% by colin
// roc 2007-08 00570f00  unit: RBX::Reflection::ClassDescriptor  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570f00
//
// 00570f00  56                   push esi
// 00570f01  8b742408             mov esi, dword ptr [esp + 8]
// 00570f05  85f6                 test esi, esi
// 00570f07  7411                 je 0x570f1a
// 00570f09  8bce                 mov ecx, esi
// 00570f0b  ff15ace67700         call dword ptr [0x77e6ac]
// 00570f11  56                   push esi
// 00570f12  e84bed0b00           call 0x62fc62
// 00570f17  83c404               add esp, 4
// 00570f1a  5e                   pop esi
// 00570f1b  c3                   ret 

struct S
{
    void f(void* p);
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __cdecl sub_62FC62(void*);

void S::f(void* p)
{
    if (p)
    {
        sub_77E6AC(p);
        sub_62FC62(p);
    }
}

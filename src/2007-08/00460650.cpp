// from server: 69% by colin
// roc 2007-08 00460650  unit: RBX::VInstance::?$Listener  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460650
//
// 00460650  56                   push esi
// 00460651  8bf1                 mov esi, ecx
// 00460653  e8f8f81c00           call 0x62ff50
// 00460658  85c0                 test eax, eax
// 0046065a  743a                 je 0x460696
// 0046065c  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 00460662  85c0                 test eax, eax
// 00460664  7515                 jne 0x46067b
// 00460666  6854597800           push 0x785954
// 0046066b  8bce                 mov ecx, esi
// 0046066d  e8def81c00           call 0x62ff50
// 00460672  8bc8                 mov ecx, eax
// 00460674  e89df91c00           call 0x630016
// 00460679  5e                   pop esi
// 0046067a  c3                   ret 
// 0046067b  8d88c8000000         lea ecx, [eax + 0xc8]
// 00460681  ff15a8e67700         call dword ptr [0x77e6a8]
// 00460687  50                   push eax
// 00460688  8bce                 mov ecx, esi
// 0046068a  e8c1f81c00           call 0x62ff50
// 0046068f  8bc8                 mov ecx, eax
// 00460691  e880f91c00           call 0x630016
// 00460696  5e                   pop esi
// 00460697  c3                   ret 

struct S {
    char pad[0x134];
    void* field_134;
    void f();
};

extern "C" void* __cdecl func_62ff50();
extern "C" void __cdecl func_630016();
extern "C" void* __stdcall func_77e6a8();

void S::f()
{
    void* p = func_62ff50();
    if (p != 0)
        return;
    void* q = *(void**)((char*)this + 0x134);
    if (q == 0) {
        func_62ff50();
        func_630016();
        return;
    }
    func_77e6a8();
    func_62ff50();
    func_630016();
}

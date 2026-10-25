// from server: 100% by king_originala
// roc 2008-06 00666d30  unit: RBX::HUMAN::Dead  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666d30
//
// 00666d30  6aff                 push -1
// 00666d32  68b8c27d00           push 0x7dc2b8
// 00666d37  64a100000000         mov eax, dword ptr fs:[0]
// 00666d3d  50                   push eax
// 00666d3e  64892500000000       mov dword ptr fs:[0], esp
// 00666d45  51                   push ecx
// 00666d46  56                   push esi
// 00666d47  57                   push edi
// 00666d48  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00666d4c  8bf1                 mov esi, ecx
// 00666d4e  57                   push edi
// 00666d4f  8974240c             mov dword ptr [esp + 0xc], esi
// 00666d53  e8a8d0fdff           call 0x643e00
// 00666d58  57                   push edi
// 00666d59  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00666d61  c706e0cc8400         mov dword ptr [esi], 0x84cce0
// 00666d67  c74604d8cc8400       mov dword ptr [esi + 4], 0x84ccd8
// 00666d6e  e8fd08f7ff           call 0x5d7670
// 00666d73  83c404               add esp, 4
// 00666d76  85c0                 test eax, eax
// 00666d78  7407                 je 0x666d81
// 00666d7a  8bc8                 mov ecx, eax
// 00666d7c  e87fdef1ff           call 0x584c00
// 00666d81  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00666d85  5f                   pop edi
// 00666d86  8bc6                 mov eax, esi
// 00666d88  5e                   pop esi
// 00666d89  64890d00000000       mov dword ptr fs:[0], ecx
// 00666d90  83c410               add esp, 0x10
// 00666d93  c20400               ret 4

struct S;

struct Model {
    void notify();
};

Model* __cdecl func_005d7670(S* object);

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    Base(S* object);
    virtual ~Base();
};

struct Dead : Base {
    Dead(S* object);
    virtual ~Dead();
};

Dead::Dead(S* object) : Base(object)
{
    Model* model = func_005d7670(object);
    if (model)
        model->notify();
}

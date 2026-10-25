// from server: 100% by king_originala
// roc 2008-06 0064cda0  unit: RBX::HUMAN::Climbing  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064cda0
//
// 0064cda0  53                   push ebx
// 0064cda1  55                   push ebp
// 0064cda2  56                   push esi
// 0064cda3  57                   push edi
// 0064cda4  8bf9                 mov edi, ecx
// 0064cda6  8b4f08               mov ecx, dword ptr [edi + 8]
// 0064cda9  e862c60100           call 0x669410
// 0064cdae  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0064cdb2  8bcd                 mov ecx, ebp
// 0064cdb4  e8a7a7f9ff           call 0x5e7560
// 0064cdb9  8bf0                 mov esi, eax
// 0064cdbb  807e6900             cmp byte ptr [esi + 0x69], 0
// 0064cdbf  7412                 je 0x64cdd3
// 0064cdc1  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0064cdc4  034e6c               add ecx, dword ptr [esi + 0x6c]
// 0064cdc7  8b4670               mov eax, dword ptr [esi + 0x70]
// 0064cdca  ffd0                 call eax
// 0064cdcc  884668               mov byte ptr [esi + 0x68], al
// 0064cdcf  c6466900             mov byte ptr [esi + 0x69], 0
// 0064cdd3  8a5e68               mov bl, byte ptr [esi + 0x68]
// 0064cdd6  55                   push ebp
// 0064cdd7  8bce                 mov ecx, esi
// 0064cdd9  e85297f9ff           call 0x5e6530
// 0064cdde  807e6900             cmp byte ptr [esi + 0x69], 0
// 0064cde2  7412                 je 0x64cdf6
// 0064cde4  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0064cde7  034e6c               add ecx, dword ptr [esi + 0x6c]
// 0064cdea  8b5670               mov edx, dword ptr [esi + 0x70]
// 0064cded  ffd2                 call edx
// 0064cdef  884668               mov byte ptr [esi + 0x68], al
// 0064cdf2  c6466900             mov byte ptr [esi + 0x69], 0
// 0064cdf6  3a5e68               cmp bl, byte ptr [esi + 0x68]
// 0064cdf9  7430                 je 0x64ce2b
// 0064cdfb  8b07                 mov eax, dword ptr [edi]
// 0064cdfd  8b5004               mov edx, dword ptr [eax + 4]
// 0064ce00  8bcf                 mov ecx, edi
// 0064ce02  ffd2                 call edx
// 0064ce04  83f805               cmp eax, 5
// 0064ce07  7418                 je 0x64ce21
// 0064ce09  8da42400000000       lea esp, [esp]
// 0064ce10  8b7f08               mov edi, dword ptr [edi + 8]
// 0064ce13  8b07                 mov eax, dword ptr [edi]
// 0064ce15  8b5004               mov edx, dword ptr [eax + 4]
// 0064ce18  8bcf                 mov ecx, edi
// 0064ce1a  ffd2                 call edx
// 0064ce1c  83f805               cmp eax, 5
// 0064ce1f  75ef                 jne 0x64ce10
// 0064ce21  6a00                 push 0
// 0064ce23  56                   push esi
// 0064ce24  8bcf                 mov ecx, edi
// 0064ce26  e865eaffff           call 0x64b890
// 0064ce2b  5f                   pop edi
// 0064ce2c  5e                   pop esi
// 0064ce2d  5d                   pop ebp
// 0064ce2e  5b                   pop ebx
// 0064ce2f  c20400               ret 4

struct Value;
struct Input
{
    int get();
};

typedef bool (__thiscall *Evaluator)(void*);

struct Value
{
    char padding[0x68];
    bool cached;
    bool dirty;
    char alignment[2];
    int adjustment;
    Evaluator evaluate;
    char* object;

    void update(int argument);
};

struct S
{
    virtual void slot0();
    virtual int rank();

    int padding;
    S* parent;

    void prepare();
    void notify(Value* value, int argument);
    void f(Input* input);
};

void S::f(Input* input)
{
    parent->prepare();

    Value* value = reinterpret_cast<Value*>(input->get());
    if (value->dirty)
    {
        value->cached = value->evaluate(value->object + value->adjustment);
        value->dirty = false;
    }

    bool previous = value->cached;
    value->update(reinterpret_cast<int>(input));

    if (value->dirty)
    {
        value->cached = value->evaluate(value->object + value->adjustment);
        value->dirty = false;
    }

    if (previous != value->cached)
    {
        S* stage = this;
        while (stage->rank() != 5)
            stage = stage->parent;
        stage->notify(value, 0);
    }
}

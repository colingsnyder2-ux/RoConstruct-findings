// from server: 100% by king_originala
// roc 2008-06 0042d370  unit: boost::any::H::?$holder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d370
//
// 0042d370  55                   push ebp
// 0042d371  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0042d375  56                   push esi
// 0042d376  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042d37a  3bf5                 cmp esi, ebp
// 0042d37c  7447                 je 0x42d3c5
// 0042d37e  53                   push ebx
// 0042d37f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0042d383  57                   push edi
// 0042d384  8d7e04               lea edi, [esi + 4]
// 0042d387  8b03                 mov eax, dword ptr [ebx]
// 0042d389  8906                 mov dword ptr [esi], eax
// 0042d38b  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0042d38e  85c9                 test ecx, ecx
// 0042d390  7409                 je 0x42d39b
// 0042d392  8b11                 mov edx, dword ptr [ecx]
// 0042d394  8b4208               mov eax, dword ptr [edx + 8]
// 0042d397  ffd0                 call eax
// 0042d399  eb02                 jmp 0x42d39d
// 0042d39b  33c0                 xor eax, eax
// 0042d39d  8d4c2414             lea ecx, [esp + 0x14]
// 0042d3a1  3bcf                 cmp ecx, edi
// 0042d3a3  7406                 je 0x42d3ab
// 0042d3a5  8bc8                 mov ecx, eax
// 0042d3a7  8b07                 mov eax, dword ptr [edi]
// 0042d3a9  890f                 mov dword ptr [edi], ecx
// 0042d3ab  85c0                 test eax, eax
// 0042d3ad  740a                 je 0x42d3b9
// 0042d3af  8b10                 mov edx, dword ptr [eax]
// 0042d3b1  8bc8                 mov ecx, eax
// 0042d3b3  8b02                 mov eax, dword ptr [edx]
// 0042d3b5  6a01                 push 1
// 0042d3b7  ffd0                 call eax
// 0042d3b9  83c608               add esi, 8
// 0042d3bc  83c708               add edi, 8
// 0042d3bf  3bf5                 cmp esi, ebp
// 0042d3c1  75c4                 jne 0x42d387
// 0042d3c3  5f                   pop edi
// 0042d3c4  5b                   pop ebx
// 0042d3c5  5e                   pop esi
// 0042d3c6  5d                   pop ebp
// 0042d3c7  c3                   ret 

struct Holder {
    virtual ~Holder();
    virtual const void* type() const;
    virtual Holder* clone() const;
};

struct Value {
    int key;
    Holder* content;
};

void __cdecl fill(Value* first, Value* last, const Value& value)
{
    for (; first != last; ++first) {
        first->key = value.key;
        Holder* source = value.content;
        Holder* temporary = source ? source->clone() : 0;
        if (&temporary != &first->content) {
            Holder* saved = temporary;
            temporary = first->content;
            first->content = saved;
        }
        if (temporary)
            delete temporary;
    }
}

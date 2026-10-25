// from server: 100% by king_originala
// roc 2008-06 0057b630  unit: RBX::DataModel  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b630
//
// 0057b630  53                   push ebx
// 0057b631  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0057b635  56                   push esi
// 0057b636  57                   push edi
// 0057b637  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057b63b  57                   push edi
// 0057b63c  53                   push ebx
// 0057b63d  8bf1                 mov esi, ecx
// 0057b63f  e84cbefdff           call 0x557490
// 0057b644  8b86f0010000         mov eax, dword ptr [esi + 0x1f0]
// 0057b64a  8b10                 mov edx, dword ptr [eax]
// 0057b64c  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 0057b652  6a01                 push 1
// 0057b654  ffd2                 call edx
// 0057b656  8b3f                 mov edi, dword ptr [edi]
// 0057b658  57                   push edi
// 0057b659  83ec08               sub esp, 8
// 0057b65c  8bc4                 mov eax, esp
// 0057b65e  89642420             mov dword ptr [esp + 0x20], esp
// 0057b662  53                   push ebx
// 0057b663  50                   push eax
// 0057b664  83c614               add esi, 0x14
// 0057b667  e8d4d30900           call 0x618a40
// 0057b66c  83c408               add esp, 8
// 0057b66f  56                   push esi
// 0057b670  b9b0519700           mov ecx, 0x9751b0
// 0057b675  e8f6feffff           call 0x57b570
// 0057b67a  5f                   pop edi
// 0057b67b  5e                   pop esi
// 0057b67c  5b                   pop ebx
// 0057b67d  c20800               ret 8

struct Value {
    int first;
    int second;
    Value(const Value&);
    ~Value();
};

extern Value __cdecl func_00618a40(int);

struct Dispatcher {
    void func_0057b570(void*, Value, int);
};

extern Dispatcher dispatcher;

struct VirtualPart {
    virtual void invoke(int);
};

struct DataModel {
    char padding[0x1f0];
    VirtualPart part;

    void func_0053e2a0(int, int);
    void func_0057b630(int, int*);
};

void DataModel::func_0057b630(int a, int* b)
{
    func_0053e2a0(a, reinterpret_cast<int>(b));
    part.invoke(1);
    int value = *b;
    void* object = reinterpret_cast<char*>(this) + 0x14;
    dispatcher.func_0057b570(object, func_00618a40(a), value);
}

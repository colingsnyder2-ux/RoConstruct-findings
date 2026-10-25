// from server: 100% by king_originala
// roc 2008-06 0061a470  unit: RBX::InletTool  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a470
//
// 0061a470  53                   push ebx
// 0061a471  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0061a475  56                   push esi
// 0061a476  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a47a  57                   push edi
// 0061a47b  53                   push ebx
// 0061a47c  56                   push esi
// 0061a47d  e89e7cffff           call 0x612120
// 0061a482  8bf8                 mov edi, eax
// 0061a484  83c408               add esp, 8
// 0061a487  85ff                 test edi, edi
// 0061a489  7454                 je 0x61a4df
// 0061a48b  53                   push ebx
// 0061a48c  56                   push esi
// 0061a48d  e81e81ffff           call 0x6125b0
// 0061a492  83c408               add esp, 8
// 0061a495  85c0                 test eax, eax
// 0061a497  743b                 je 0x61a4d4
// 0061a499  a1dcb19500           mov eax, dword ptr [0x95b1dc]
// 0061a49e  50                   push eax
// 0061a49f  68f0d8ffff           push 0xffffd8f0
// 0061a4a4  56                   push esi
// 0061a4a5  e8e67fffff           call 0x612490
// 0061a4aa  6afe                 push -2
// 0061a4ac  6aff                 push -1
// 0061a4ae  56                   push esi
// 0061a4af  e82c7affff           call 0x611ee0
// 0061a4b4  83c418               add esp, 0x18
// 0061a4b7  85c0                 test eax, eax
// 0061a4b9  7424                 je 0x61a4df
// 0061a4bb  6afd                 push -3
// 0061a4bd  56                   push esi
// 0061a4be  e85d77ffff           call 0x611c20
// 0061a4c3  8b0f                 mov ecx, dword ptr [edi]
// 0061a4c5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061a4c9  83c408               add esp, 8
// 0061a4cc  5f                   pop edi
// 0061a4cd  5e                   pop esi
// 0061a4ce  890a                 mov dword ptr [edx], ecx
// 0061a4d0  b001                 mov al, 1
// 0061a4d2  5b                   pop ebx
// 0061a4d3  c3                   ret 
// 0061a4d4  6afe                 push -2
// 0061a4d6  56                   push esi
// 0061a4d7  e84477ffff           call 0x611c20
// 0061a4dc  83c408               add esp, 8
// 0061a4df  5f                   pop edi
// 0061a4e0  5e                   pop esi
// 0061a4e1  32c0                 xor al, al
// 0061a4e3  5b                   pop ebx
// 0061a4e4  c3                   ret 

struct State;

extern "C" unsigned* __cdecl to_userdata(State*, int);
extern "C" int __cdecl get_metatable(State*, int);
extern "C" void __cdecl get_field(State*, int, const char*);
extern "C" int __cdecl raw_equal(State*, int, int);
extern "C" void __cdecl set_top(State*, int);

extern const char* metatable_name;

bool __cdecl extract_value(State* state, int index, unsigned* result)
{
    unsigned* value = to_userdata(state, index);
    if (value)
    {
        if (get_metatable(state, index))
        {
            get_field(state, -10000, metatable_name);
            if (raw_equal(state, -1, -2))
            {
                set_top(state, -3);
                *result = *value;
                return true;
            }
        }
        else
        {
            set_top(state, -2);
        }
    }
    return false;
}

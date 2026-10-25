// from server: 100% by king_originala
// roc 2008-06 005a96a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a96a0
//
// 005a96a0  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a96a5  56                   push esi
// 005a96a6  57                   push edi
// 005a96a7  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a96ab  50                   push eax
// 005a96ac  6a02                 push 2
// 005a96ae  57                   push edi
// 005a96af  e8fc7e0600           call 0x6115b0
// 005a96b4  8b0dc0b19500         mov ecx, dword ptr [0x95b1c0]
// 005a96ba  51                   push ecx
// 005a96bb  6a01                 push 1
// 005a96bd  57                   push edi
// 005a96be  8bf0                 mov esi, eax
// 005a96c0  e8eb7e0600           call 0x6115b0
// 005a96c5  d906                 fld dword ptr [esi]
// 005a96c7  8bc8                 mov ecx, eax
// 005a96c9  d819                 fcomp dword ptr [ecx]
// 005a96cb  83c418               add esp, 0x18
// 005a96ce  dfe0                 fnstsw ax
// 005a96d0  f6c444               test ah, 0x44
// 005a96d3  7a21                 jp 0x5a96f6
// 005a96d5  d94604               fld dword ptr [esi + 4]
// 005a96d8  d85904               fcomp dword ptr [ecx + 4]
// 005a96db  dfe0                 fnstsw ax
// 005a96dd  f6c444               test ah, 0x44
// 005a96e0  7a14                 jp 0x5a96f6
// 005a96e2  d94608               fld dword ptr [esi + 8]
// 005a96e5  d85908               fcomp dword ptr [ecx + 8]
// 005a96e8  dfe0                 fnstsw ax
// 005a96ea  f6c444               test ah, 0x44
// 005a96ed  7a07                 jp 0x5a96f6
// 005a96ef  b801000000           mov eax, 1
// 005a96f4  eb02                 jmp 0x5a96f8
// 005a96f6  33c0                 xor eax, eax
// 005a96f8  0fb6d0               movzx edx, al
// 005a96fb  52                   push edx
// 005a96fc  57                   push edi
// 005a96fd  e8ee8c0600           call 0x6123f0
// 005a9702  83c408               add esp, 8
// 005a9705  5f                   pop edi
// 005a9706  b801000000           mov eax, 1
// 005a970b  5e                   pop esi
// 005a970c  c3                   ret 

struct State;

struct Vector3 {
    float x, y, z;
};

extern const char* vectorType;

extern "C" Vector3* __cdecl checkVector(State*, int, const char*);
extern "C" void __cdecl pushBoolean(State*, int);

#pragma float_control(precise, off)

int __cdecl vectorsEqual(State* state)
{
    Vector3* second = checkVector(state, 2, vectorType);
    Vector3* first = checkVector(state, 1, vectorType);

    int equal = (static_cast<double>(first->x) == second->x
              && static_cast<double>(first->y) == second->y
              && static_cast<double>(first->z) == second->z) ? 1 : 0;

    pushBoolean(state, static_cast<unsigned char>(equal));
    return 1;
}

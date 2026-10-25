// from server: 100% by king_originala
// roc 2008-06 00660910  unit: RBX::FilterStairs  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00660910
//
// 00660910  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00660914  53                   push ebx
// 00660915  55                   push ebp
// 00660916  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 00660919  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 0066091d  56                   push esi
// 0066091e  57                   push edi
// 0066091f  8b7d00               mov edi, dword ptr [ebp]
// 00660922  8b7738               mov esi, dword ptr [edi + 0x38]
// 00660925  8d5f38               lea ebx, [edi + 0x38]
// 00660928  40                   inc eax
// 00660929  3bc6                 cmp eax, esi
// 0066092b  7e24                 jle 0x660951
// 0066092d  8b5718               mov edx, dword ptr [edi + 0x18]
// 00660930  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00660933  6848c58400           push 0x84c548
// 00660938  68ff7f0000           push 0x7fff
// 0066093d  6a0c                 push 0xc
// 0066093f  53                   push ebx
// 00660940  52                   push edx
// 00660941  50                   push eax
// 00660942  e8f9fdffff           call 0x660740
// 00660947  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0066094b  83c418               add esp, 0x18
// 0066094e  894718               mov dword ptr [edi + 0x18], eax
// 00660951  3b33                 cmp esi, dword ptr [ebx]
// 00660953  7d1d                 jge 0x660972
// 00660955  8d0476               lea eax, [esi + esi*2]
// 00660958  03c0                 add eax, eax
// 0066095a  03c0                 add eax, eax
// 0066095c  8d642400             lea esp, [esp]
// 00660960  8b5718               mov edx, dword ptr [edi + 0x18]
// 00660963  c7041000000000       mov dword ptr [eax + edx], 0
// 0066096a  46                   inc esi
// 0066096b  83c00c               add eax, 0xc
// 0066096e  3b33                 cmp esi, dword ptr [ebx]
// 00660970  7cee                 jl 0x660960
// 00660972  0fbf4530             movsx eax, word ptr [ebp + 0x30]
// 00660976  8b7718               mov esi, dword ptr [edi + 0x18]
// 00660979  8d1440               lea edx, [eax + eax*2]
// 0066097c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00660980  890496               mov dword ptr [esi + edx*4], eax
// 00660983  f6400503             test byte ptr [eax + 5], 3
// 00660987  7414                 je 0x66099d
// 00660989  f6470504             test byte ptr [edi + 5], 4
// 0066098d  740e                 je 0x66099d
// 0066098f  50                   push eax
// 00660990  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00660993  57                   push edi
// 00660994  50                   push eax
// 00660995  e8e6baffff           call 0x65c480
// 0066099a  83c40c               add esp, 0xc
// 0066099d  0fb74d30             movzx ecx, word ptr [ebp + 0x30]
// 006609a1  5f                   pop edi
// 006609a2  0fbfc1               movsx eax, cx
// 006609a5  41                   inc ecx
// 006609a6  5e                   pop esi
// 006609a7  66894d30             mov word ptr [ebp + 0x30], cx
// 006609ab  5d                   pop ebp
// 006609ac  5b                   pop ebx
// 006609ad  c3                   ret 

struct String {
    unsigned char padding[5];
    unsigned char flags;
};

struct Local {
    String* name;
    int start;
    int end;
};

struct Prototype {
    unsigned char padding0[5];
    unsigned char flags;
    unsigned char padding1[18];
    Local* locals;
    unsigned char padding2[28];
    int capacity;
};

struct FunctionState {
    Prototype* prototype;
    unsigned char padding[44];
    short localCount;
};

struct Parser {
    unsigned char padding[48];
    FunctionState* function;
    void* state;
};

extern "C" void* __cdecl growVector(
    void*, void*, int*, int, int, const char*);
extern "C" void __cdecl barrier(void*, Prototype*, String*);

int __cdecl registerLocal(Parser* parser, String* name)
{
    FunctionState* function = parser->function;
    Prototype* prototype = function->prototype;
    int oldCapacity = prototype->capacity;

    if (function->localCount + 1 > prototype->capacity)
        prototype->locals = (Local*)growVector(
            parser->state, prototype->locals, &prototype->capacity,
            12, 32767, "too many local variables");

    while (oldCapacity < prototype->capacity) {
        prototype->locals[oldCapacity].name = 0;
        ++oldCapacity;
    }

    prototype->locals[function->localCount].name = name;

    if ((name->flags & 3) && (prototype->flags & 4))
        barrier(parser->state, prototype, name);

    return function->localCount++;
}

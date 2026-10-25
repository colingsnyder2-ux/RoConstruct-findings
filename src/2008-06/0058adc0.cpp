// from server: 100% by king_originala
// roc 2008-06 0058adc0  unit: RBX::VChangeHistoryService::?$BoundFuncDesc  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058adc0
//
// 0058adc0  6aff                 push -1
// 0058adc2  68e82c7d00           push 0x7d2ce8
// 0058adc7  64a100000000         mov eax, dword ptr fs:[0]
// 0058adcd  50                   push eax
// 0058adce  64892500000000       mov dword ptr fs:[0], esp
// 0058add5  83ec14               sub esp, 0x14
// 0058add8  56                   push esi
// 0058add9  57                   push edi
// 0058adda  8bf9                 mov edi, ecx
// 0058addc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0058addf  8b4740               mov eax, dword ptr [edi + 0x40]
// 0058ade2  89442408             mov dword ptr [esp + 8], eax
// 0058ade6  85c9                 test ecx, ecx
// 0058ade8  7409                 je 0x58adf3
// 0058adea  8b11                 mov edx, dword ptr [ecx]
// 0058adec  8b4208               mov eax, dword ptr [edx + 8]
// 0058adef  ffd0                 call eax
// 0058adf1  eb02                 jmp 0x58adf5
// 0058adf3  33c0                 xor eax, eax
// 0058adf5  8944240c             mov dword ptr [esp + 0xc], eax
// 0058adf9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058adfd  8b11                 mov edx, dword ptr [ecx]
// 0058adff  8b5204               mov edx, dword ptr [edx + 4]
// 0058ae02  8d442408             lea eax, [esp + 8]
// 0058ae06  50                   push eax
// 0058ae07  6a01                 push 1
// 0058ae09  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0058ae11  ffd2                 call edx
// 0058ae13  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058ae17  6a00                 push 0
// 0058ae19  68bc919400           push 0x9491bc
// 0058ae1e  68fc919200           push 0x9291fc
// 0058ae23  6a00                 push 0
// 0058ae25  50                   push eax
// 0058ae26  e89b691100           call 0x6a17c6
// 0058ae2b  8bf0                 mov esi, eax
// 0058ae2d  83c414               add esp, 0x14
// 0058ae30  85f6                 test esi, esi
// 0058ae32  751e                 jne 0x58ae52
// 0058ae34  6834ba8000           push 0x80ba34
// 0058ae39  8d4c2414             lea ecx, [esp + 0x14]
// 0058ae3d  ff1564288000         call dword ptr [0x802864]
// 0058ae43  682c368d00           push 0x8d362c
// 0058ae48  8d4c2414             lea ecx, [esp + 0x14]
// 0058ae4c  51                   push ecx
// 0058ae4d  e83a671100           call 0x6a158c
// 0058ae52  8d4c2408             lea ecx, [esp + 8]
// 0058ae56  e8553dfeff           call 0x56ebb0
// 0058ae5b  0fb610               movzx edx, byte ptr [eax]
// 0058ae5e  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0058ae61  8b4738               mov eax, dword ptr [edi + 0x38]
// 0058ae64  52                   push edx
// 0058ae65  03ce                 add ecx, esi
// 0058ae67  ffd0                 call eax
// 0058ae69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058ae6d  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0058ae75  85c9                 test ecx, ecx
// 0058ae77  7408                 je 0x58ae81
// 0058ae79  8b11                 mov edx, dword ptr [ecx]
// 0058ae7b  8b02                 mov eax, dword ptr [edx]
// 0058ae7d  6a01                 push 1
// 0058ae7f  ffd0                 call eax
// 0058ae81  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058ae85  5f                   pop edi
// 0058ae86  5e                   pop esi
// 0058ae87  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ae8e  83c420               add esp, 0x20
// 0058ae91  c20800               ret 8

struct Holder;

struct HolderTable {
    void* (__thiscall *destroy)(Holder*, unsigned int);
    void* reserved;
    Holder* (__thiscall *clone)(Holder*);
};

struct Holder {
    const HolderTable* table;
};

struct Value {
    void* data;
    Holder* holder;

    Value(void* d, Holder* h) : data(d) {
        Holder* copy;
        if (h)
            copy = h->table->clone(h);
        else
            copy = 0;
        holder = copy;
    }

    ~Value() {
        if (holder)
            holder->table->destroy(holder, 1);
    }

    bool* getBool();
};

struct Arguments;

struct ArgumentsTable {
    void* reserved;
    void (__thiscall *get)(Arguments*, int, Value*);
};

struct Arguments {
    const ArgumentsTable* table;
};

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

extern unsigned char sourceType;
extern unsigned char destinationType;
extern unsigned char badCastThrowInfo;

struct BadCast {
    unsigned char storage[12];
};

extern void (__thiscall *constructBadCast)(BadCast*, const char*);

extern "C" __declspec(noreturn) void __stdcall throwException(
    void*, void*);

struct __multiple_inheritance Service;

struct S {
    unsigned char padding[0x38];
    void (Service::*invoke)(bool);
    void* data;
    Holder* holder;

    void f(void* object, Arguments* arguments);
};

void S::f(void* object, Arguments* arguments) {
    Value value(data, holder);
    arguments->table->get(arguments, 1, &value);

    Service* service = static_cast<Service*>(__RTDynamicCast(
        object, 0, &sourceType, &destinationType, 0));

    if (!service) {
        BadCast error;
        constructBadCast(&error, "bad cast");
        throwException(&error, &badCastThrowInfo);
    }

    (service->*invoke)(*value.getBool());
}

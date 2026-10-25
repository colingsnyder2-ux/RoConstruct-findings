// from server: 100% by colin
// roc 2008-06 0063bb10  unit: RBX::P8DebrisService::?$GetSetImpl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063bb10
//
// 0063bb10  56                   push esi
// 0063bb11  8b742408             mov esi, dword ptr [esp + 8]
// 0063bb15  57                   push edi
// 0063bb16  56                   push esi
// 0063bb17  8bf9                 mov edi, ecx
// 0063bb19  e8d2e7fcff           call 0x60a2f0
// 0063bb1e  83c404               add esp, 4
// 0063bb21  84c0                 test al, al
// 0063bb23  7532                 jne 0x63bb57
// 0063bb25  8d4708               lea eax, [edi + 8]
// 0063bb28  85c0                 test eax, eax
// 0063bb2a  7420                 je 0x63bb4c
// 0063bb2c  8b0e                 mov ecx, dword ptr [esi]
// 0063bb2e  8908                 mov dword ptr [eax], ecx
// 0063bb30  8b5604               mov edx, dword ptr [esi + 4]
// 0063bb33  895004               mov dword ptr [eax + 4], edx
// 0063bb36  8b4e08               mov ecx, dword ptr [esi + 8]
// 0063bb39  894808               mov dword ptr [eax + 8], ecx
// 0063bb3c  85c9                 test ecx, ecx
// 0063bb3e  740c                 je 0x63bb4c
// 0063bb40  83c104               add ecx, 4
// 0063bb43  b801000000           mov eax, 1
// 0063bb48  f00fc101             lock xadd dword ptr [ecx], eax
// 0063bb4c  c70770998400         mov dword ptr [edi], 0x849970
// 0063bb52  5f                   pop edi
// 0063bb53  5e                   pop esi
// 0063bb54  c20400               ret 4
// 0063bb57  c70700000000         mov dword ptr [edi], 0
// 0063bb5d  5f                   pop edi
// 0063bb5e  5e                   pop esi
// 0063bb5f  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


bool __cdecl func_0060a2f0();
extern unsigned char tagSymbol[];

struct Control {
    long reserved;
    volatile long references;
};

struct Value {
    void* first;
    void* second;
    Control* control;
};

struct S {
    void* tag;
    unsigned long reserved;
    Value value;

    void f(const Value* source);
};

void S::f(const Value* source)
{
    if (!reinterpret_cast<bool (__cdecl *)(const Value*)>(
            &func_0060a2f0)(source)) {
        Value* destination = &value;
        if (destination) {
            destination->first = source->first;
            destination->second = source->second;
            destination->control = source->control;
            if (destination->control) {
                volatile long* references = &destination->control->references;
                _InterlockedIncrement(references);
            }
        }
        tag = tagSymbol;
    } else {
        tag = 0;
    }
}

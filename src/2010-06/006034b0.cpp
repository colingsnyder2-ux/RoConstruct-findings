// roc 2010-06 006034b0  unit: RBX::ArrowTool  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006034b0
//
// 006034b0  51                   push ecx
// 006034b1  8b442418             mov eax, dword ptr [esp + 0x18]
// 006034b5  56                   push esi
// 006034b6  8b742414             mov esi, dword ptr [esp + 0x14]
// 006034ba  57                   push edi
// 006034bb  8bf8                 mov edi, eax
// 006034bd  3bf0                 cmp esi, eax
// 006034bf  7440                 je 0x603501
// 006034c1  8b442430             mov eax, dword ptr [esp + 0x30]
// 006034c5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006034c9  8b542428             mov edx, dword ptr [esp + 0x28]
// 006034cd  50                   push eax
// 006034ce  8b06                 mov eax, dword ptr [esi]
// 006034d0  51                   push ecx
// 006034d1  52                   push edx
// 006034d2  83ec08               sub esp, 8
// 006034d5  8bcc                 mov ecx, esp
// 006034d7  8901                 mov dword ptr [ecx], eax
// 006034d9  8b4604               mov eax, dword ptr [esi + 4]
// 006034dc  8964241c             mov dword ptr [esp + 0x1c], esp
// 006034e0  894104               mov dword ptr [ecx + 4], eax
// 006034e3  85c0                 test eax, eax
// 006034e5  740c                 je 0x6034f3
// 006034e7  83c004               add eax, 4
// 006034ea  b901000000           mov ecx, 1
// 006034ef  f00fc108             lock xadd dword ptr [eax], ecx
// 006034f3  ff542438             call dword ptr [esp + 0x38]
// 006034f7  83c608               add esi, 8
// 006034fa  83c414               add esp, 0x14
// 006034fd  3bf7                 cmp esi, edi
// 006034ff  75c0                 jne 0x6034c1
// 00603501  8b442410             mov eax, dword ptr [esp + 0x10]
// 00603505  8b542424             mov edx, dword ptr [esp + 0x24]
// 00603509  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060350d  8910                 mov dword ptr [eax], edx
// 0060350f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00603513  894804               mov dword ptr [eax + 4], ecx
// 00603516  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060351a  5f                   pop edi
// 0060351b  895008               mov dword ptr [eax + 8], edx
// 0060351e  89480c               mov dword ptr [eax + 0xc], ecx
// 00603521  5e                   pop esi
// 00603522  59                   pop ecx
// 00603523  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_005a1890@@YA?AUFunction@@UIterator@@0U1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Value {
    void* pointer;
    volatile long* control;
    Value(const Value&);
    ~Value();
};

inline Value::Value(const Value& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(control + 1);
}

struct Iterator {
    void* unused;
    Value* pointer;
};

struct Function {
    void (__cdecl *callback)(Value, int, int, int);
    int a;
    int b;
    int c;
};

Function __cdecl func_005a1890(Iterator first, Iterator last, Function function)
{
    Value* current = first.pointer;
    Value* end = last.pointer;
    for (; current != end; ++current)
        function.callback(*current, function.a, function.b, function.c);
    return function;
}
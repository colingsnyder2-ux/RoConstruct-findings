// from server: 100% by colin
// roc 2008-06 005a1890  unit: RBX::ArrowTool  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1890
//
// 005a1890  51                   push ecx
// 005a1891  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a1895  56                   push esi
// 005a1896  8b742414             mov esi, dword ptr [esp + 0x14]
// 005a189a  57                   push edi
// 005a189b  8bf8                 mov edi, eax
// 005a189d  3bf0                 cmp esi, eax
// 005a189f  7440                 je 0x5a18e1
// 005a18a1  8b442430             mov eax, dword ptr [esp + 0x30]
// 005a18a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a18a9  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a18ad  50                   push eax
// 005a18ae  8b06                 mov eax, dword ptr [esi]
// 005a18b0  51                   push ecx
// 005a18b1  52                   push edx
// 005a18b2  83ec08               sub esp, 8
// 005a18b5  8bcc                 mov ecx, esp
// 005a18b7  8901                 mov dword ptr [ecx], eax
// 005a18b9  8b4604               mov eax, dword ptr [esi + 4]
// 005a18bc  8964241c             mov dword ptr [esp + 0x1c], esp
// 005a18c0  894104               mov dword ptr [ecx + 4], eax
// 005a18c3  85c0                 test eax, eax
// 005a18c5  740c                 je 0x5a18d3
// 005a18c7  83c004               add eax, 4
// 005a18ca  b901000000           mov ecx, 1
// 005a18cf  f00fc108             lock xadd dword ptr [eax], ecx
// 005a18d3  ff542438             call dword ptr [esp + 0x38]
// 005a18d7  83c608               add esi, 8
// 005a18da  83c414               add esp, 0x14
// 005a18dd  3bf7                 cmp esi, edi
// 005a18df  75c0                 jne 0x5a18a1
// 005a18e1  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a18e5  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a18e9  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a18ed  8910                 mov dword ptr [eax], edx
// 005a18ef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a18f3  894804               mov dword ptr [eax + 4], ecx
// 005a18f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a18fa  5f                   pop edi
// 005a18fb  895008               mov dword ptr [eax + 8], edx
// 005a18fe  89480c               mov dword ptr [eax + 0xc], ecx
// 005a1901  5e                   pop esi
// 005a1902  59                   pop ecx
// 005a1903  c3                   ret 

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

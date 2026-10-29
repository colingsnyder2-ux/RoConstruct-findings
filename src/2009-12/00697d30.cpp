// roc 2009-12 00697d30  unit: RBX::ArrowTool  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00697d30
//
// 00697d30  51                   push ecx
// 00697d31  8b442418             mov eax, dword ptr [esp + 0x18]
// 00697d35  56                   push esi
// 00697d36  8b742414             mov esi, dword ptr [esp + 0x14]
// 00697d3a  57                   push edi
// 00697d3b  8bf8                 mov edi, eax
// 00697d3d  3bf0                 cmp esi, eax
// 00697d3f  7440                 je 0x697d81
// 00697d41  8b442430             mov eax, dword ptr [esp + 0x30]
// 00697d45  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00697d49  8b542428             mov edx, dword ptr [esp + 0x28]
// 00697d4d  50                   push eax
// 00697d4e  8b06                 mov eax, dword ptr [esi]
// 00697d50  51                   push ecx
// 00697d51  52                   push edx
// 00697d52  83ec08               sub esp, 8
// 00697d55  8bcc                 mov ecx, esp
// 00697d57  8901                 mov dword ptr [ecx], eax
// 00697d59  8b4604               mov eax, dword ptr [esi + 4]
// 00697d5c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00697d60  894104               mov dword ptr [ecx + 4], eax
// 00697d63  85c0                 test eax, eax
// 00697d65  740c                 je 0x697d73
// 00697d67  83c004               add eax, 4
// 00697d6a  b901000000           mov ecx, 1
// 00697d6f  f00fc108             lock xadd dword ptr [eax], ecx
// 00697d73  ff542438             call dword ptr [esp + 0x38]
// 00697d77  83c608               add esi, 8
// 00697d7a  83c414               add esp, 0x14
// 00697d7d  3bf7                 cmp esi, edi
// 00697d7f  75c0                 jne 0x697d41
// 00697d81  8b442410             mov eax, dword ptr [esp + 0x10]
// 00697d85  8b542424             mov edx, dword ptr [esp + 0x24]
// 00697d89  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00697d8d  8910                 mov dword ptr [eax], edx
// 00697d8f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00697d93  894804               mov dword ptr [eax + 4], ecx
// 00697d96  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00697d9a  5f                   pop edi
// 00697d9b  895008               mov dword ptr [eax + 8], edx
// 00697d9e  89480c               mov dword ptr [eax + 0xc], ecx
// 00697da1  5e                   pop esi
// 00697da2  59                   pop ecx
// 00697da3  c3                   ret 
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
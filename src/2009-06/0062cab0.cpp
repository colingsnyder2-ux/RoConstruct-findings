// roc 2009-06 0062cab0  unit: RBX::ArrowTool  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062cab0
//
// 0062cab0  51                   push ecx
// 0062cab1  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062cab5  56                   push esi
// 0062cab6  8b742414             mov esi, dword ptr [esp + 0x14]
// 0062caba  57                   push edi
// 0062cabb  8bf8                 mov edi, eax
// 0062cabd  3bf0                 cmp esi, eax
// 0062cabf  7440                 je 0x62cb01
// 0062cac1  8b442430             mov eax, dword ptr [esp + 0x30]
// 0062cac5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062cac9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0062cacd  50                   push eax
// 0062cace  8b06                 mov eax, dword ptr [esi]
// 0062cad0  51                   push ecx
// 0062cad1  52                   push edx
// 0062cad2  83ec08               sub esp, 8
// 0062cad5  8bcc                 mov ecx, esp
// 0062cad7  8901                 mov dword ptr [ecx], eax
// 0062cad9  8b4604               mov eax, dword ptr [esi + 4]
// 0062cadc  8964241c             mov dword ptr [esp + 0x1c], esp
// 0062cae0  894104               mov dword ptr [ecx + 4], eax
// 0062cae3  85c0                 test eax, eax
// 0062cae5  740c                 je 0x62caf3
// 0062cae7  83c004               add eax, 4
// 0062caea  b901000000           mov ecx, 1
// 0062caef  f00fc108             lock xadd dword ptr [eax], ecx
// 0062caf3  ff542438             call dword ptr [esp + 0x38]
// 0062caf7  83c608               add esi, 8
// 0062cafa  83c414               add esp, 0x14
// 0062cafd  3bf7                 cmp esi, edi
// 0062caff  75c0                 jne 0x62cac1
// 0062cb01  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062cb05  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062cb09  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062cb0d  8910                 mov dword ptr [eax], edx
// 0062cb0f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062cb13  894804               mov dword ptr [eax + 4], ecx
// 0062cb16  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062cb1a  5f                   pop edi
// 0062cb1b  895008               mov dword ptr [eax + 8], edx
// 0062cb1e  89480c               mov dword ptr [eax + 0xc], ecx
// 0062cb21  5e                   pop esi
// 0062cb22  59                   pop ecx
// 0062cb23  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YA?AUFunction@@UIterator@@0U1@@Z)

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
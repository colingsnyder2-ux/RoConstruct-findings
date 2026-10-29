// roc 2009-06 006bb530  unit: RBX::Lua::LuaArguments  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb530
//
// 006bb530  51                   push ecx
// 006bb531  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 006bb534  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006bb538  8b01                 mov eax, dword ptr [ecx]
// 006bb53a  8b4008               mov eax, dword ptr [eax + 8]
// 006bb53d  56                   push esi
// 006bb53e  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bb542  52                   push edx
// 006bb543  56                   push esi
// 006bb544  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006bb54c  ffd0                 call eax
// 006bb54e  8bc6                 mov eax, esi
// 006bb550  5e                   pop esi
// 006bb551  59                   pop ecx
// 006bb552  c20800               ret 8
// copied from an identical function in another client (function ?get@S@@QAE?AUResult@@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual Result get(int) = 0;
};

struct S {
    char padding[24];
    Interface* object;
    Result get(int);
};

Result S::get(int index) {
    return object->get(index);
}
// from server: 100% by king_originala
// roc 2008-06 005cf690  unit: RBX::P8HopperBin::?$SetImpl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf690
//
// 005cf690  8b442404             mov eax, dword ptr [esp + 4]
// 005cf694  8bd1                 mov edx, ecx
// 005cf696  85c0                 test eax, eax
// 005cf698  7415                 je 0x5cf6af
// 005cf69a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cf69e  51                   push ecx
// 005cf69f  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005cf6a2  8b5208               mov edx, dword ptr [edx + 8]
// 005cf6a5  83c0ec               add eax, -0x14
// 005cf6a8  03c8                 add ecx, eax
// 005cf6aa  ffd2                 call edx
// 005cf6ac  c20800               ret 8
// 005cf6af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005cf6b3  51                   push ecx
// 005cf6b4  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005cf6b7  8b5208               mov edx, dword ptr [edx + 8]
// 005cf6ba  33c0                 xor eax, eax
// 005cf6bc  03c8                 add ecx, eax
// 005cf6be  ffd2                 call edx
// 005cf6c0  c20800               ret 8

struct __multiple_inheritance Object;
typedef void (Object::*Setter)(int);

struct S {
    char padding[8];
    Setter setter;
    void f(char* object, int value);
};

void S::f(char* object, int value)
{
    Object* target = reinterpret_cast<Object*>(object ? object - 20 : 0);
    (target->*setter)(value);
}

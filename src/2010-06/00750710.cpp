// from server: 100% by tester
// roc 2010-06 00750710  unit: RBX::Humanoid  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750710
//
// 00750710  8b442404             mov eax, dword ptr [esp + 4]
// 00750714  85c0                 test eax, eax
// 00750716  7409                 je 0x750721
// 00750718  83781800             cmp dword ptr [eax + 0x18], 0
// 0075071c  7403                 je 0x750721
// 0075071e  b001                 mov al, 1
// 00750720  c3                   ret 
// 00750721  32c0                 xor al, al
// 00750723  c3                   ret 

struct Humanoid
{
    char pad[0x18];
    void* field_18;
};

bool func_006d2220(Humanoid* obj)
{
    if (obj != 0 && obj->field_18 != 0)
        return true;
    return false;
}

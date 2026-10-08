// from server: 100% by colin
// roc 2007-08 004c4c50  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4c50
//
// 004c4c50  8b8100050000         mov eax, dword ptr [ecx + 0x500]
// 004c4c56  8b9104050000         mov edx, dword ptr [ecx + 0x504]
// 004c4c5c  c3                   ret 

struct RakPeer {
    long long getLastTimeBetweenPacketsIncrease();
};

long long RakPeer::getLastTimeBetweenPacketsIncrease()
{
    return *(long long*)((char*)this + 0x500);
}

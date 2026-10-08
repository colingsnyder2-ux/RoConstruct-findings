// from server: 92% by colin
// roc 2007-08 007273f0  unit: boost::thread_resource_error  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007273f0
//
// 007273f0  8bc1                 mov eax, ecx
// 007273f2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007273f6  8b11                 mov edx, dword ptr [ecx]
// 007273f8  8910                 mov dword ptr [eax], edx
// 007273fa  8b4904               mov ecx, dword ptr [ecx + 4]
// 007273fd  85c9                 test ecx, ecx
// 007273ff  894804               mov dword ptr [eax + 4], ecx
// 00727402  740c                 je 0x727410
// 00727404  83c104               add ecx, 4
// 00727407  ba01000000           mov edx, 1
// 0072740c  f00fc111             lock xadd dword ptr [ecx], edx
// 00727410  8b08                 mov ecx, dword ptr [eax]
// 00727412  830101               add dword ptr [ecx], 1
// 00727415  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct boost_thread_resource_error {
    int* field0;
    int* field4;
    boost_thread_resource_error(const boost_thread_resource_error& other);
};

boost_thread_resource_error::boost_thread_resource_error(const boost_thread_resource_error& other)
{
    field0 = other.field0;
    field4 = other.field4;
    if (field4 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)field4 + 4), 1);
    }
    (*field0)++;
}

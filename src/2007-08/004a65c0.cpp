// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BitStream {
    void writeBits(unsigned int value, int numBits);
};

struct Item {
    void write(BitStream* stream);
};

struct MarkerItem {
    int field0;
    int field4;
    int field8;
    void sendMarker(int markerId);
};

struct RefCounted {
    long refCount;
    long weakRefCount;
    virtual void destroy();
    virtual void release();
};

extern "C" void __cdecl writeBitsHelper(BitStream* stream, int value, int numBits);
extern "C" void __cdecl writeItemHelper(Item* item, BitStream* stream);
extern "C" void* __cdecl getStringHelper(const char* str);
extern "C" void __cdecl formatStringHelper(void* result, const char* format, ...);
extern "C" void __cdecl writeStringHelper(BitStream* stream, const char* str, int len);
extern "C" void __cdecl writeIntHelper(BitStream* stream, int value, int numBits);
extern "C" void __cdecl writeMarkerHelper(BitStream* stream, int value, int numBits);
extern "C" void __cdecl writeDataHelper(BitStream* stream, const void* data, int size);

extern const char markerFormatString[];

void MarkerItem::sendMarker(int markerId)
{
    BitStream* stream = (BitStream*)field8;
    writeBitsHelper(stream, 4, 4);
    writeItemHelper((Item*)field8, stream);
    
    void* strResult = 0;
    formatStringHelper(&strResult, markerFormatString, markerId);
    
    int markerValue = *(int*)strResult;
    
    int result = 0;
    result = ((int (__thiscall*)(void*, int))0x4a3510)((char*)field4 + 0x1e18, 1);
    
    writeStringHelper(stream, (const char*)field8, markerValue);
    writeIntHelper(stream, result, 1);
    writeMarkerHelper(stream, markerValue, 1);
    
    if (strResult != 0) {
        RefCounted* rc = (RefCounted*)strResult;
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            rc->destroy();
            if (_InterlockedExchangeAdd(&rc->weakRefCount, -1) == 1) {
                rc->release();
            }
        }
    }
    
    void* vtable = *(void**)field4;
    void (*func)(void*, int) = *(void (**)(void*, int))((char*)vtable + 0x4c);
    func((void*)field4, field8);
}

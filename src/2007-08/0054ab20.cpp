// from server: 54% by colin
struct ServiceProvider {
    char pad[0x58];
    ServiceProvider(const ServiceProvider& other);
};

extern "C" void __stdcall copy_string(void* dst, const void* src);

ServiceProvider::ServiceProvider(const ServiceProvider& other) {
    *reinterpret_cast<int*>(this) = *reinterpret_cast<const int*>(&other);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 4) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 4);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 8) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 8);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0xc) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 0xc);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x10) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 0x10);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x14) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 0x14);
    copy_string(reinterpret_cast<char*>(this) + 0x18, reinterpret_cast<const char*>(&other) + 0x18);
    copy_string(reinterpret_cast<char*>(this) + 0x34, reinterpret_cast<const char*>(&other) + 0x34);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x50) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 0x50);
    *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + 0x54) = *reinterpret_cast<const int*>(reinterpret_cast<const char*>(&other) + 0x54);
}

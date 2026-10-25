// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_manual_mainframe_0fe43c76eb69f1fe.cpp

// Candidate translation unit (score above; library headers required).
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
extern "C" __declspec(dllimport) int __stdcall EnumDisplaySettingsExA(const char*, unsigned long, void*, unsigned long);
extern "C" __declspec(dllimport) unsigned long __stdcall GetLastError();

#include <boost/shared_ptr.hpp>
#include <math.h>
#include <stdlib.h>
struct StandardOut;
extern boost::shared_ptr<StandardOut> __cdecl getStandardOut();
extern void __cdecl print(StandardOut*, int, const char*, ...);

struct Settings {
    char bytes[0x9c];
};

struct Result {
    char bytes[0x28];
    int fields;
    char pad[0x68 - 0x2c];
    unsigned bits;
    unsigned width;
    unsigned height;
    char pad74[4];
    unsigned frequency;
    char tail[0x9c - 0x7c];
};

Result* __cdecl reconstruct(register Result* output, const char* device, int desired)
{
    Result* result = *reinterpret_cast<Result* volatile*>(&output);
    Settings current = {};
    *(unsigned short*)(current.bytes + 0x24) = sizeof(current);

    if (!EnumDisplaySettingsExA(device, 0xffffffff, &current, 0)) {
        print(getStandardOut().get(), 3, "EnumDisplaySettings failed. GetLastError() == %d", GetLastError());
    }

    double aspect = (double)*(unsigned*)(current.bytes + 0x6c) / *(unsigned*)(current.bytes + 0x70);
    *reinterpret_cast<Settings*>(result) = current;

    unsigned index = 0;
    if (EnumDisplaySettingsExA(device, index, &current, 0)) {
        double inverseAspect = 1.0 / aspect;
        do {
            ++index;
            unsigned width = *(unsigned*)(current.bytes + 0x6c);
            unsigned height = *(unsigned*)(current.bytes + 0x70);
            double error = fabs(aspect - (double)width / height) * inverseAspect;
            if (error <= 0.1 &&
                result->bits == *(unsigned*)(current.bytes + 0x68) &&
                result->frequency == *(unsigned*)(current.bytes + 0x78)) {
                int oldDistance = abs(desired - (int)(result->height * result->width));
                int newDistance = abs(desired - (int)(height * width));
                if (newDistance < oldDistance)
                    *reinterpret_cast<Settings*>(result) = current;
            }
        } while (EnumDisplaySettingsExA(device, index, &current, 0));
    }

    result->fields = 0x180000;
    return result;
}

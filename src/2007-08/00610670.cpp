// from server: 45% by colin
extern "C" int __cdecl strcoll(const char*, const char*);

struct Ball {
    int compare(const Ball& other) const;
    char pad0[8];
    int size;
    char data[1];
};

int Ball::compare(const Ball& other) const {
    int mySize = size;
    int otherSize = other.size;
    const char* myData = data;
    const char* otherData = other.data;
    int result = strcoll(myData, otherData);
    while (result == 0) {
        const char* p = otherData;
        const char* q = p + 1;
        char c = *p;
        p++;
        while (c != 0) {
            c = *p;
            p++;
        }
        int len = (int)(p - q);
        if (len == mySize) {
            int r = 0;
            if (len != otherSize) r = 1;
            return r;
        }
        if (len == otherSize) {
            return -1;
        }
        len++;
        myData += len;
        otherData += len;
        otherSize -= len;
        mySize -= len;
        result = strcoll(myData, otherData);
    }
    return result;
}

// from server: 55% by colin
extern "C" int __cdecl sprintf(char* buffer, const char* format, ...);

struct Ball {
    double value;
    int state;

    int method(int* out);
};

int __cdecl sub_612D70(int* a, int* b, int c);

int Ball::method(int* out) {
    if (this->state != 3) {
        return 0;
    }
    char buffer[32];
    sprintf(buffer, "%.14g", this->value);
    int len = 0;
    while (buffer[len] != 0) {
        len++;
    }
    *out = sub_612D70(out, (int*)buffer, len);
    this->state = 4;
    return 1;
}

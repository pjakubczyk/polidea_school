#import <Cedar-iOS/SpecHelper.h>

#define EXP_SHORTHAND
#import "Expecta.h"


SPEC_BEGIN(Spec)

describe(@"compiler", ^{

    describe(@"compilation", ^{
        it(@"should complie rightfully", ^{
            expect(2+2).toEqual(4);
        });
    });
});

SPEC_END

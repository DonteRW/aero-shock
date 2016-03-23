#ifndef NDG_TRI_P4
#define NDG_TRI_P4

int p = 4;

double r[15] = {-1,-0.654653670708,0,0.654653670708,1,-1,-0.551583507555,0.103167015111,0.654653670708,-1,-0.551583507555,0,-1,-0.654653670708,-1};

double s[15] = {-1,-1,-1,-1,-1,-0.654653670708,-0.551583507555,-0.551583507555,-0.654653670708,0,0.103167015111,0,0.654653670708,0.654653670708,1};

double Dr[15][15] = {{-5,6.75650248872,-2.66666666667,1.41016417794,-0.5,0,0,0,0,0,0,0,0,0,0},
{-1.24099025303,0,1.74574312189,-0.763762615826,0.259009746969,0,0,0,0,0,0,0,0,0,0},
{0.375,-1.3365845777,0,1.3365845777,-0.375,0,0,0,0,0,0,0,0,0,0},
{-0.259009746969,0.763762615826,-1.74574312189,0,1.24099025303,0,0,0,0,0,0,0,0,0,0},
{0.5,-1.41016417794,2.66666666667,-6.75650248872,5,0,0,0,0,0,0,0,0,0,0},
{-0.985089969065,2.41013845949,-2.01253295893,1.56901054508,-0.690212510791,-3.3348449066,4.74585412644,-1.76426270006,0.47028777213,-0.382517293831,-0.405522204029,0.171966263489,0.263343412378,0.0414853134306,-0.0971033491298},
{0.371019669996,-0.661277182036,0.755745350899,-0.661277182036,0.319018410667,-0.889415460347,-0.203710705556,1.52729927718,-0.361530534898,-0.189940821762,0,-0.0772073456692,0.0759984837645,0.0308919438798,-0.0356139040804},
{-0.319018410667,0.661277182036,-0.755745350899,0.661277182036,-0.371019669996,0.361530534898,-1.52729927718,0.203710705556,0.889415460347,0.0772073456692,0,0.189940821762,-0.0308919438798,-0.0759984837645,0.0356139040804},
{0.690212510791,-1.56901054508,2.01253295893,-2.41013845949,0.985089969065,-0.47028777213,1.76426270006,-4.74585412644,3.3348449066,-0.171966263489,0.405522204029,0.382517293831,-0.0414853134306,-0.263343412378,0.0971033491298},
{0.513947317982,-0.388517631968,-0.610495858513,1.25557446083,-0.832871893885,-1.49045995187,3.79779043211,-3.0874597251,1.25557446083,-3.19693049586,3.79779043211,-0.610495858513,-0.153875374176,-0.388517631968,0.138947317982},
{-0.354632314748,0.392422478778,0,-0.392422478778,0.354632314748,0.737275665801,-1.52729927718,1.52729927718,-0.737275665801,-0.945686172661,0,0.945686172661,-0.22813827831,0.22813827831,0},
{0.832871893885,-1.25557446083,0.610495858513,0.388517631968,-0.513947317982,-1.25557446083,3.0874597251,-3.79779043211,1.49045995187,0.610495858513,-3.79779043211,3.19693049586,0.388517631968,0.153875374176,-0.138947317982},
{-0.356113096099,0.0414853134306,0.171966263489,0.47028777213,-0.690212510791,1.0271060282,-0.405522204029,-1.76426270006,1.56901054508,-2.12826041572,4.74585412644,-2.01253295893,-3.3348449066,2.41013845949,0.255900283966},
{0.690212510791,-0.47028777213,-0.171966263489,-0.0414853134306,0.356113096099,-1.56901054508,1.76426270006,0.405522204029,-1.0271060282,2.01253295893,-4.74585412644,2.12826041572,-2.41013845949,3.3348449066,-0.255900283966},
{0.5,0,0,0,-0.5,-1.41016417794,0,0,1.41016417794,2.66666666667,0,-2.66666666667,-6.75650248872,6.75650248872,0}};

double Ds[15][15] = {{-5,0,0,0,0,6.75650248872,0,0,0,-2.66666666667,0,0,1.41016417794,0,-0.5},
{-0.985089969065,-3.3348449066,-0.382517293831,0.263343412378,-0.0971033491298,2.41013845949,4.74585412644,-0.405522204029,0.0414853134306,-2.01253295893,-1.76426270006,0.171966263489,1.56901054508,0.47028777213,-0.690212510791},
{0.513947317982,-1.49045995187,-3.19693049586,-0.153875374176,0.138947317982,-0.388517631968,3.79779043211,3.79779043211,-0.388517631968,-0.610495858513,-3.0874597251,-0.610495858513,1.25557446083,1.25557446083,-0.832871893885},
{-0.356113096099,1.0271060282,-2.12826041572,-3.3348449066,0.255900283966,0.0414853134306,-0.405522204029,4.74585412644,2.41013845949,0.171966263489,-1.76426270006,-2.01253295893,0.47028777213,1.56901054508,-0.690212510791},
{0.5,-1.41016417794,2.66666666667,-6.75650248872,0,0,0,0,6.75650248872,0,0,-2.66666666667,0,1.41016417794,-0.5},
{-1.24099025303,0,0,0,0,0,0,0,0,1.74574312189,0,0,-0.763762615826,0,0.259009746969},
{0.371019669996,-0.889415460347,-0.189940821762,0.0759984837645,-0.0356139040804,-0.661277182036,-0.203710705556,0,0.0308919438798,0.755745350899,1.52729927718,-0.0772073456692,-0.661277182036,-0.361530534898,0.319018410667},
{-0.354632314748,0.737275665801,-0.945686172661,-0.22813827831,0,0.392422478778,-1.52729927718,0,0.22813827831,0,1.52729927718,0.945686172661,-0.392422478778,-0.737275665801,0.354632314748},
{0.690212510791,-1.56901054508,2.01253295893,-2.41013845949,-0.255900283966,-0.47028777213,1.76426270006,-4.74585412644,3.3348449066,-0.171966263489,0.405522204029,2.12826041572,-0.0414853134306,-1.0271060282,0.356113096099},
{0.375,0,0,0,0,-1.3365845777,0,0,0,0,0,0,1.3365845777,0,-0.375},
{-0.319018410667,0.361530534898,0.0772073456692,-0.0308919438798,0.0356139040804,0.661277182036,-1.52729927718,0,-0.0759984837645,-0.755745350899,0.203710705556,0.189940821762,0.661277182036,0.889415460347,-0.371019669996},
{0.832871893885,-1.25557446083,0.610495858513,0.388517631968,-0.138947317982,-1.25557446083,3.0874597251,-3.79779043211,0.153875374176,0.610495858513,-3.79779043211,3.19693049586,0.388517631968,1.49045995187,-0.513947317982},
{-0.259009746969,0,0,0,0,0.763762615826,0,0,0,-1.74574312189,0,0,0,0,1.24099025303},
{0.690212510791,-0.47028777213,-0.171966263489,-0.0414853134306,0.0971033491298,-1.56901054508,1.76426270006,0.405522204029,-0.263343412378,2.01253295893,-4.74585412644,0.382517293831,-2.41013845949,3.3348449066,0.985089969065},
{0.5,0,0,0,0,-1.41016417794,0,0,0,2.66666666667,0,0,-6.75650248872,0,5}};

double LIFT[15][15] = {{10,6.75650248872,-2.66666666667,1.41016417794,-0.5,0.75,4.08333333333,5.33333333333,4.08333333333,0.75,10,6.75650248872,-2.66666666667,1.41016417794,-0.5},
{1.24099025303,11.6666666667,2.66666666667,-0.833333333333,0.259009746969,-0.277815782689,-1.89026424032,-1.97478868121,1.25112280531,0.748888756056,0.119652517383,-3.16778947197,1.26730568801,-0.526402426346,0.164376550067},
{-0.375,2.04166666667,11.6666666667,2.04166666667,-0.375,0.015625,2.348220461,0.166666666667,-1.32738712766,0.671875,0.015625,2.348220461,0.166666666667,-1.32738712766,0.671875},
{0.259009746969,-0.833333333333,2.66666666667,11.6666666667,1.24099025303,0.119652517383,-3.16778947197,1.26730568801,-0.526402426346,0.164376550067,-0.277815782689,-1.89026424032,-1.97478868121,1.25112280531,0.748888756056},
{-0.5,1.41016417794,-2.66666666667,6.75650248872,10,10,6.75650248872,-2.66666666667,1.41016417794,-0.5,0.75,4.08333333333,5.33333333333,4.08333333333,0.75},
{0.119652517383,-3.16778947197,1.26730568801,-0.526402426346,0.164376550067,0.748888756056,1.25112280531,-1.97478868121,-1.89026424032,-0.277815782689,1.24099025303,11.6666666667,2.66666666667,-0.833333333333,0.259009746969},
{-0.139460375759,-1.11249422321,-1.42029649182,0.202494419842,0.00307453719524,-0.0856272869483,0.259579971912,1.25216501862,0.259579971912,-0.0856272869483,-0.139460375759,-1.11249422321,-1.42029649182,0.202494419842,0.00307453719524},
{0.00307453719524,0.202494419842,-1.42029649182,-1.11249422321,-0.139460375759,-0.139460375759,-1.11249422321,-1.42029649182,0.202494419842,0.00307453719524,-0.0856272869483,0.259579971912,1.25216501862,0.259579971912,-0.0856272869483},
{0.164376550067,-0.526402426346,1.26730568801,-3.16778947197,0.119652517383,1.24099025303,11.6666666667,2.66666666667,-0.833333333333,0.259009746969,0.748888756056,1.25112280531,-1.97478868121,-1.89026424032,-0.277815782689},
{0.015625,2.348220461,0.166666666667,-1.32738712766,0.671875,0.671875,-1.32738712766,0.166666666667,2.348220461,0.015625,-0.375,2.04166666667,11.6666666667,2.04166666667,-0.375},
{-0.0856272869483,0.259579971912,1.25216501862,0.259579971912,-0.0856272869483,0.00307453719524,0.202494419842,-1.42029649182,-1.11249422321,-0.139460375759,0.00307453719524,0.202494419842,-1.42029649182,-1.11249422321,-0.139460375759},
{0.671875,-1.32738712766,0.166666666667,2.348220461,0.015625,-0.375,2.04166666667,11.6666666667,2.04166666667,-0.375,0.671875,-1.32738712766,0.166666666667,2.348220461,0.015625},
{-0.277815782689,-1.89026424032,-1.97478868121,1.25112280531,0.748888756056,0.164376550067,-0.526402426346,1.26730568801,-3.16778947197,0.119652517383,0.259009746969,-0.833333333333,2.66666666667,11.6666666667,1.24099025303},
{0.748888756056,1.25112280531,-1.97478868121,-1.89026424032,-0.277815782689,0.259009746969,-0.833333333333,2.66666666667,11.6666666667,1.24099025303,0.164376550067,-0.526402426346,1.26730568801,-3.16778947197,0.119652517383},
{0.75,4.08333333333,5.33333333333,4.08333333333,0.75,-0.5,1.41016417794,-2.66666666667,6.75650248872,10,-0.5,1.41016417794,-2.66666666667,6.75650248872,10}};

double FaceMask[5][3] = {{0,4,0},
{1,8,5},
{2,11,9},
{3,13,12},
{4,14,14}};

double V[15][15] = {{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.73205080757,2.12132034356,-2.44948974278,2.73861278753,2.73861278753,-3.16227766017,3.53553390593,-3.74165738677,4.18330013267,4.74341649025},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,-1.13389341903,1.38873014966,-1.60356745147,1.792842914,0.391230398218,-0.451753951453,0.505076272276,1.04978131834,-1.17369119465,-2.03289278154},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,0,0,0,0,-1.36930639376,1.58113883008,-1.76776695297,0,0,1.77878118384},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,1.13389341903,-1.38873014966,1.60356745147,-1.792842914,0.391230398218,-0.451753951453,0.505076272276,-1.04978131834,1.17369119465,-2.03289278154},
{0.707106781187,-1,1.22474487139,-1.41421356237,1.58113883008,1.73205080757,-2.12132034356,2.44948974278,-2.73861278753,2.73861278753,-3.16227766017,3.53553390593,3.74165738677,-4.18330013267,4.74341649025},
{0.707106781187,-0.481980506062,-0.101929513514,0.606091526731,-0.677630927179,-1.4329721133,0.239796429781,0.903713239251,-1.2553457332,1.87449745255,0.451753951453,-1.6683095433,-2.11882628599,-1.31252011014,2.22228474359},
{0.707106781187,-0.327375261333,-0.356367191039,0.700716656292,-0.400530571948,-0.56703058577,-0.0840592377026,0.509081980751,-0.387756060421,-0.383856511189,-0.252406054232,0.38536256429,0.777635570577,0.884963253242,-0.26467989587},
{0.707106781187,-0.327375261333,-0.356367191039,0.700716656292,-0.400530571948,0.56703058577,0.0840592377026,-0.509081980751,0.387756060421,-0.383856511189,-0.252406054232,0.38536256429,-0.777635570577,-0.884963253242,-0.26467989587},
{0.707106781187,-0.481980506062,-0.101929513514,0.606091526731,-0.677630927179,1.4329721133,-0.239796429781,-0.903713239251,1.2553457332,1.87449745255,0.451753951453,-1.6683095433,2.11882628599,1.31252011014,2.22228474359},
{0.707106781187,0.5,-0.612372435696,-0.53033008589,0.592927061282,-0.866025403784,-1.59099025767,-0.306186217848,1.36930639376,0.684653196881,1.97642353761,1.76776695297,-0.467707173347,-1.83019380804,0.296463530641},
{0.707106781187,0.654750522666,-0.453430438069,-0.76887643684,0.267381224019,0,0,0,0,-0.275336501949,-0.909628065333,-1.1116807226,0,0,0.0719198604164},
{0.707106781187,0.5,-0.612372435696,-0.53033008589,0.592927061282,0.866025403784,1.59099025767,0.306186217848,-1.36930639376,0.684653196881,1.97642353761,1.76776695297,0.467707173347,1.83019380804,0.296463530641},
{0.707106781187,1.48198050606,1.50163793796,0.606091526731,-0.677630927179,-0.299078694271,-1.14893371988,-2.3034216637,-3.0481886472,0.0816545385441,0.451753951453,1.30754077739,-0.019263649314,-0.138828915483,0.00421687427947},
{0.707106781187,1.48198050606,1.50163793796,0.606091526731,-0.677630927179,0.299078694271,1.14893371988,2.3034216637,3.0481886472,0.0816545385441,0.451753951453,1.30754077739,0.019263649314,0.138828915483,0.00421687427947},
{0.707106781187,2,3.67423461417,5.65685424949,7.90569415042,0,0,0,0,0,0,0,0,0,0}};

#endif
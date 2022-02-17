
import random as r


def main():
    stations = ['PJR', 'GEN', 'TRP', 'LNS', 'VPW']
    min_temp = 59
    max_temp = 93.2
    with open('weather_data.csv', 'w') as f:
        for i in range(1000):
            # id,station,temp
            entry = [str(i), r.choice(stations), str(round(min_temp +
                     r.random()*(max_temp - min_temp), 2))]
            f.writelines(",".join(entry) + '\n')


if __name__ == '__main__':
    main()
